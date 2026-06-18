docker run --network host --rm \
    -e PUID=185518 -e PGID=1029 \
    -v /local/home/zdenis/turboturtle/fuzzing/run_20250613103420/run_20250613103420_pipeline_00000000:/work \
    dynamatic:cec1a8f \
    'cd synth;timeout --signal=SIGINT --kill-after=5m 32m dynamatic --exit-on-failure --run=script.dyn'
