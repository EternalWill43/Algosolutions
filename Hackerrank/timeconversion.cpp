//		https://www.hackerrank.com/challenges/time-conversion/problem
string timeConversion(string s) {
    int h, m, se;
    char t;
    sscanf(s.c_str(),"%d:%d:%d%c", &h, &m, &se, &t);
    if (h == 12 && t == 'A') h = 0;
    else if (h < 12 && t == 'P') h += 12;
    char buf[9];
    sprintf(buf,"%02d:%02d:%02d", h, m, se);
    return buf;
}