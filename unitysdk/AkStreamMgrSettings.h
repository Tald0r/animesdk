#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AKSTREAMMGRSETTINGS_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1B01A0D0)
#define AKSTREAMMGRSETTINGS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B01A010)
#define AKSTREAMMGRSETTINGS_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B01A060)
#define AKSTREAMMGRSETTINGS_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1B019FA0)
#define AKSTREAMMGRSETTINGS_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1B019FB0)
#define AKSTREAMMGRSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B019F90)

inline static constexpr unsigned int AkStreamMgrSettings_TypeDefinitionIndex = 29985;

class AkStreamMgrSettings : public ::System::Object
{
public:
	::System::Boolean swigCMemOwn; // 0x10
	::System::IntPtr swigCPtr; // 0x18

	::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKSTREAMMGRSETTINGS__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
	}

	static ::System::IntPtr getCPtr(::AkStreamMgrSettings* obj)
	{
		return ((::System::IntPtr(*)(::AkStreamMgrSettings*))((::PBYTE)hIl2Cpp + AKSTREAMMGRSETTINGS_GETCPTR_OFFSET))(obj);
	}

	::System::Void setCPtr(::System::IntPtr cPtr)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKSTREAMMGRSETTINGS_SETCPTR_OFFSET))(this, cPtr);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSTREAMMGRSETTINGS_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSTREAMMGRSETTINGS_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean disposing)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKSTREAMMGRSETTINGS_DISPOSE_1_OFFSET))(this, disposing);
	}
};
