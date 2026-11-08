import pandas as pd
from spacetrack import SpaceTrackClient

def load_sat_info() -> pd.DataFrame:
    info_df = pd.read_csv('data.ucs_sat_data.txt', sep='\t')
    # discard columns that we don't need
    return info_df


def fetch_sat_orbits() -> pd.DataFrame:
    orbits_df = 

    # filter to PV and NORAD ID
    return orbits_df

def propagate_orbits():
    return