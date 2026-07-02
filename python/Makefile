PYTHON = python3

.PHONY: all install test clean check

all: install

install:
	python3 -m pip install -r requirements.txt

test:
	PYTHONPATH=. python3 -m pytest ../tests/PythonUnityTests/

clean:
	rm -rf __pycache__
	rm -rf ../.pytest_cache
	rm -rf ../tests/PythonUnityTests/__pycache__

check:
	$(PYTHON) -m pylint *.py --rcfile=/dev/null --msg-template="{path}:{line}:{column}: [{msg_id}({symbol}), {obj}] {msg}"