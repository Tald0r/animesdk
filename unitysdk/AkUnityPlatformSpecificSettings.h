#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AKUNITYPLATFORMSPECIFICSETTINGS_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1B08FCC0)
#define AKUNITYPLATFORMSPECIFICSETTINGS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B08FC00)
#define AKUNITYPLATFORMSPECIFICSETTINGS_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B08FC50)
#define AKUNITYPLATFORMSPECIFICSETTINGS_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1B08FB90)
#define AKUNITYPLATFORMSPECIFICSETTINGS_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1B08FBA0)
#define AKUNITYPLATFORMSPECIFICSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B08FB80)

inline static constexpr unsigned int AkUnityPlatformSpecificSettings_TypeDefinitionIndex = 29999;

class AkUnityPlatformSpecificSettings : public ::System::Object
{
public:
	::System::IntPtr swigCPtr; // 0x10
	::System::Boolean swigCMemOwn; // 0x18

	::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKUNITYPLATFORMSPECIFICSETTINGS__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
	}

	static ::System::IntPtr getCPtr(::AkUnityPlatformSpecificSettings* obj)
	{
		return ((::System::IntPtr(*)(::AkUnityPlatformSpecificSettings*))((::PBYTE)hIl2Cpp + AKUNITYPLATFORMSPECIFICSETTINGS_GETCPTR_OFFSET))(obj);
	}

	::System::Void setCPtr(::System::IntPtr cPtr)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKUNITYPLATFORMSPECIFICSETTINGS_SETCPTR_OFFSET))(this, cPtr);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKUNITYPLATFORMSPECIFICSETTINGS_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKUNITYPLATFORMSPECIFICSETTINGS_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean disposing)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKUNITYPLATFORMSPECIFICSETTINGS_DISPOSE_1_OFFSET))(this, disposing);
	}
};
