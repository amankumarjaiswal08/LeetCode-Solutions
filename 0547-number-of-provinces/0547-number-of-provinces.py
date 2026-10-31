class Solution:
    def findCircleNum(self, isConnected: List[List[int]]) -> int:
        n = len(isConnected)
        visited = [0]*n
        province = 0
        def dfs(node):
            visited[node] = 1
            for i in range(n):
                if isConnected[node][i]==1 and not visited[i]:
                    dfs(i)
        for i in range(n):
            if not visited[i]:
                dfs(i)
                province += 1
        return province
