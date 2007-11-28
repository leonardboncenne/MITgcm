C $Header: /u/gcmpack/MITgcm/pkg/salt_plume/SALT_PLUME.h,v 1.2 2007/11/28 09:26:16 dimitri Exp $
C $Name:  $

C--   SALT_PLUME parameters

C     find surface where the potential density (ref.lev=surface) is
C     larger than surface density plus SaltPlumeCriterion.  Initially
C     use the default value 0.4 kg/m^3 of Duffy et al, 1999.
      _RL SaltPlumeCriterion
      COMMON /SALT_PLUME_PARAMS_R/ SaltPlumeCriterion

C--   SALT_PLUME 2-dim. fields

C     SaltPlumeDepth :: depth of penetration of salt plumes
C                       rejected during sea ice growth
      COMMON /DYNVARS_SALT_PLUME/ SaltPlumeDepth
      _RL SaltPlumeDepth (1-OLx:sNx+OLx,1-OLy:sNy+OLy,nSx,nSy)

C saltPlumeFlux :: Net downward salt flux in psu.kg/m^2/s
C              flux of Salt rejected back into the ocean per time unit (second).
C              Note: a) only used when salty sea-ice forms or melts.
C                    b) units: when salinity (unit= psu) is expressed
C              	        in g/kg, saltPlumeFlux unit becomes g/m^2/s.
C              > 0 for increasing in SSS.
C              Southwest C-grid tracer point
      COMMON /FFIELDS_saltPlumeFlux/ saltPlumeFlux
      _RL  saltPlumeFlux (1-OLx:sNx+OLx,1-OLy:sNy+OLy,nSx,nSy)
