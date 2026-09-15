#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    string s;
    cin >> s;

    vector<int> v(N, 0);
    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }

    stack <float> st;
    for (int i = 0; i < s.size(); i++) {
        char ch = s[i];
        if (ch >= 'A' && ch <= 'Z') {
            st.push((float)v[ch-'A']);
        }
        else {
            float a = st.top();
            st.pop();
            float b = st.top();
            st.pop();

            if (ch == '+') {
                st.push(b + a);
            }
            else if (ch == '-') {
                st.push(b - a);
            }
            else if (ch == '*') {
                st.push(b * a);
            }
            else if (ch == '/') {
                st.push(b / a);
            }
        }
    }

    cout << st.top() << endl;

    return 0;
}