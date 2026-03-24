#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_HDRMANAGER_GETCOLORGAMUTEXPAND_OFFSET UNITYSDK_OFFSET(0x1A361200)
#define UNITYENGINE_HDRMANAGER_GETENABLEAVATARHDR_OFFSET UNITYSDK_OFFSET(0x1A361280)
#define UNITYENGINE_HDRMANAGER_GETENABLEHUESHIFT_OFFSET UNITYSDK_OFFSET(0x1A361220)
#define UNITYENGINE_HDRMANAGER_GETENABLESCENEHDR_OFFSET UNITYSDK_OFFSET(0x1A361260)
#define UNITYENGINE_HDRMANAGER_GETMAXLUMINOSITY_OFFSET UNITYSDK_OFFSET(0x1A3611A0)
#define UNITYENGINE_HDRMANAGER_GETPREFERR9G9B9E5_OFFSET UNITYSDK_OFFSET(0x1A361250)
#define UNITYENGINE_HDRMANAGER_GETSCENEPAPERWHITE_OFFSET UNITYSDK_OFFSET(0x1A3611E0)
#define UNITYENGINE_HDRMANAGER_GETUIPAPERWHITE_OFFSET UNITYSDK_OFFSET(0x1A3611C0)
#define UNITYENGINE_HDRMANAGER_ISHDRON_OFFSET UNITYSDK_OFFSET(0x1A361190)
#define UNITYENGINE_HDRMANAGER_ISHDRSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1A3612A0)
#define UNITYENGINE_HDRMANAGER_SETCOLORGAMUTEXPAND_OFFSET UNITYSDK_OFFSET(0x1A361210)
#define UNITYENGINE_HDRMANAGER_SETENABLEAVATARHDR_OFFSET UNITYSDK_OFFSET(0x1A361290)
#define UNITYENGINE_HDRMANAGER_SETENABLEHUESHIFT_OFFSET UNITYSDK_OFFSET(0x1A361230)
#define UNITYENGINE_HDRMANAGER_SETENABLESCENEHDR_OFFSET UNITYSDK_OFFSET(0x1A361270)
#define UNITYENGINE_HDRMANAGER_SETMAXLUMINOSITY_OFFSET UNITYSDK_OFFSET(0x1A3611B0)
#define UNITYENGINE_HDRMANAGER_SETSCENEPAPERWHITE_OFFSET UNITYSDK_OFFSET(0x1A3611F0)
#define UNITYENGINE_HDRMANAGER_SETUIPAPERWHITE_OFFSET UNITYSDK_OFFSET(0x1A3611D0)
#define UNITYENGINE_HDRMANAGER_SETUSERGBA16F_OFFSET UNITYSDK_OFFSET(0x1A361240)
#define UNITYENGINE_HDRMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3612B0)

namespace UnityEngine
{
	inline static constexpr unsigned int HDRManager_TypeDefinitionIndex = 5425;

	class HDRManager : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_HDRMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Boolean IsHDROn()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_HDRMANAGER_ISHDRON_OFFSET))();
		}

		static ::System::Single GetMaxLuminosity()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_HDRMANAGER_GETMAXLUMINOSITY_OFFSET))();
		}

		static ::System::Void SetMaxLuminosity(::System::Single value)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_HDRMANAGER_SETMAXLUMINOSITY_OFFSET))(value);
		}

		static ::System::Single GetUIPaperWhite()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_HDRMANAGER_GETUIPAPERWHITE_OFFSET))();
		}

		static ::System::Void SetUIPaperWhite(::System::Single value)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_HDRMANAGER_SETUIPAPERWHITE_OFFSET))(value);
		}

		static ::System::Single GetScenePaperWhite()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_HDRMANAGER_GETSCENEPAPERWHITE_OFFSET))();
		}

		static ::System::Void SetScenePaperWhite(::System::Single value)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_HDRMANAGER_SETSCENEPAPERWHITE_OFFSET))(value);
		}

		static ::System::Single GetColorGamutExpand()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_HDRMANAGER_GETCOLORGAMUTEXPAND_OFFSET))();
		}

		static ::System::Void SetColorGamutExpand(::System::Single value)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_HDRMANAGER_SETCOLORGAMUTEXPAND_OFFSET))(value);
		}

		static ::System::Boolean GetEnableHueShift()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_HDRMANAGER_GETENABLEHUESHIFT_OFFSET))();
		}

		static ::System::Void SetEnableHueShift(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_HDRMANAGER_SETENABLEHUESHIFT_OFFSET))(value);
		}

		static ::System::Void SetUseRGBA16F(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_HDRMANAGER_SETUSERGBA16F_OFFSET))(value);
		}

		static ::System::Boolean GetPreferR9G9B9E5()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_HDRMANAGER_GETPREFERR9G9B9E5_OFFSET))();
		}

		static ::System::Boolean GetEnableSceneHDR()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_HDRMANAGER_GETENABLESCENEHDR_OFFSET))();
		}

		static ::System::Void SetEnableSceneHDR(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_HDRMANAGER_SETENABLESCENEHDR_OFFSET))(value);
		}

		static ::System::Boolean GetEnableAvatarHDR()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_HDRMANAGER_GETENABLEAVATARHDR_OFFSET))();
		}

		static ::System::Void SetEnableAvatarHDR(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_HDRMANAGER_SETENABLEAVATARHDR_OFFSET))(value);
		}

		static ::System::Boolean IsHDRSupported()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_HDRMANAGER_ISHDRSUPPORTED_OFFSET))();
		}
	};
}
