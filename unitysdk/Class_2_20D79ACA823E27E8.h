#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8A3658A741325FC2.h"
#include "unitysdk/Enum_3_690DBB15DA27031A.h"
#include "unitysdk/Share/ESwitchType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_20D79ACA823E27E8_METHOD_2_4719F7B84CAB8C34_OFFSET UNITYSDK_OFFSET(0x8AF15F0)
#define CLASS_2_20D79ACA823E27E8_METHOD_2_66F60B96100B8EE0_OFFSET UNITYSDK_OFFSET(0x8AF1720)
#define CLASS_2_20D79ACA823E27E8_METHOD_2_8542E37E74FDE1B5_OFFSET UNITYSDK_OFFSET(0x8AF1550)
#define CLASS_2_20D79ACA823E27E8__CTOR_OFFSET UNITYSDK_OFFSET(0x8AF1490)

inline static constexpr unsigned int Class_2_20D79ACA823E27E8_TypeDefinitionIndex = 80408;

class Class_2_20D79ACA823E27E8 : public ::Class_1_8A3658A741325FC2
{
public:
	::System::Collections::Generic::HashSet_1<::Share::ESwitchType>* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20D79ACA823E27E8__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_2_8542E37E74FDE1B5()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_20D79ACA823E27E8_METHOD_2_8542E37E74FDE1B5_OFFSET))();
	}

	static ::System::String* Method_2_4719F7B84CAB8C34()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_2_20D79ACA823E27E8_METHOD_2_4719F7B84CAB8C34_OFFSET))();
	}

	::System::Boolean Method_2_66F60B96100B8EE0(::Enum_3_690DBB15DA27031A a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_690DBB15DA27031A))((::PBYTE)hIl2Cpp + CLASS_2_20D79ACA823E27E8_METHOD_2_66F60B96100B8EE0_OFFSET))(this, a1);
	}
};
