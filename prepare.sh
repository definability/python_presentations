apt-get update && apt-get upgrade -y
apt-get install -y libpython3-all-dev

cd /tmp
git clone https://github.com/damianavila/RISE
cd RISE
python setup.py install
cd -
