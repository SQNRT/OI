/*
ID: fx.yoyo1
LANG: C++
TASK: castle
*/
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int m, n;
int mn[50][50];
int mn_in[50][50];
int mn_size[2500];
int max_size;
int map_index;
int wall[2];
char wall_d;
int floodfill(int mn_n, int mn_m, int mn_index)
{
	//set flag
	if (mn[mn_n][mn_m] == 0)
	{
		if (mn_index == 0)
		{
			++map_index;
			mn_index = map_index;
		}
		mn[mn_n][mn_m] = mn_index;

		//refresh size
		mn_size[mn_index]++;

		//refresh max-size
		if (mn_size[mn_index] > mn_size[0])
			mn_size[0] = mn_size[mn_index];
	}

	//To West
	if ((mn_in[mn_n][mn_m] & 0x1) == 0 && mn_m - 1 >= 0 && mn[mn_n][mn_m - 1] == 0)
		floodfill(mn_n, mn_m - 1, mn_index);

	//To North
	if ((mn_in[mn_n][mn_m] & 0x2) == 0 && mn_n - 1 >= 0 && mn[mn_n - 1][mn_m] == 0)
		floodfill(mn_n - 1, mn_m, mn_index);

	//To East
	if ((mn_in[mn_n][mn_m] & 0x4) == 0 && mn_m + 1 < m && mn[mn_n][mn_m + 1] == 0)
		floodfill(mn_n, mn_m + 1, mn_index);

	//To South
	if ((mn_in[mn_n][mn_m] & 0x8) == 0 && mn_n + 1 < n && mn[mn_n + 1][mn_m] == 0)
		floodfill(mn_n + 1, mn_m, mn_index);

	return 0;
}
int main()
{
	//file pointer
	FILE *in, *out;
	in = fopen("castle.in", "r");
	out = fopen("castle.out", "w");

	//initial array
	memset(mn, 0, sizeof(mn));
	memset(mn_in, 0, sizeof(mn_in));
	memset(mn_size, 0, sizeof(mn_size));
	map_index = 0;
	max_size = 0;

	//input
	fscanf(in, "%d%d", &m, &n);
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
			fscanf(in, "%d", &mn_in[i][j]);

	//floodfill
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
		{
			if (mn[i][j] == 0)
				floodfill(i, j, 0);
			else
				continue;
		}

for (int i = 0; i < n; ++i)
{
		for (int j = 0; j < m; ++j)
		printf("%d ",mn[i][j]);
		printf("\n");
	}
		

	//post-process: max-size after
	for (int i = 0; i < m; ++i)
		for (int j = n-1; j >= 0; --j)
		{
			//destory north wall
			if (j - 1 >= 0 && mn[j][i] != mn[j - 1][i])
			{
				int t = mn_size[mn[j][i]] + mn_size[mn[j - 1][i]];
				if (t > max_size)
				{
					max_size = t;
					wall[0] = j + 1;
					wall[1] = i + 1;
					wall_d = 'N';
				}
			}

			//destory east wall
			if (i + 1 < m && mn[j][i] != mn[j][i + 1])
			{
				int t = mn_size[mn[j][i]] + mn_size[mn[j][i + 1]];
				if (t > max_size)
				{
					max_size = t;
					wall[0] = j + 1;
					wall[1] = i + 1;
					wall_d = 'E';
				}
			}
		}

	//output
	fprintf(out, "%d\n", map_index);
	fprintf(out, "%d\n", mn_size[0]);
	fprintf(out, "%d\n", max_size);
	fprintf(out, "%d %d %c\n", wall[0], wall[1], wall_d);

	//close pointer
	fclose(in);
	fclose(out);

	return 0;
}
