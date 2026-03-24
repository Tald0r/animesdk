#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class MultiVersionDiffConfig; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_E9A7520E7558FD24_CLASS_1_C06E6A48D6C36C3C_METHOD_1_289111575BBD56B8_OFFSET UNITYSDK_OFFSET(0x7DB0F00)
#define CLASS_1_E9A7520E7558FD24_CLASS_1_C06E6A48D6C36C3C__CTOR_OFFSET UNITYSDK_OFFSET(0x7DB0EF0)

inline static constexpr unsigned int Class_1_E9A7520E7558FD24_Class_1_C06E6A48D6C36C3C_TypeDefinitionIndex = 60457;

class Class_1_E9A7520E7558FD24_Class_1_C06E6A48D6C36C3C : public ::System::Object
{
public:
	::System::String* Field_1_3; // 0x10
	::System::Action_1<::System::String*>* Field_1_2; // 0x18
	::System::Action_1<::System::Single>* Field_1_0; // 0x20
	::System::Single Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E9A7520E7558FD24_CLASS_1_C06E6A48D6C36C3C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_289111575BBD56B8(::Foundation::MultiVersionDiffConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::MultiVersionDiffConfig*))((::PBYTE)hIl2Cpp + CLASS_1_E9A7520E7558FD24_CLASS_1_C06E6A48D6C36C3C_METHOD_1_289111575BBD56B8_OFFSET))(this, a1);
	}
};
