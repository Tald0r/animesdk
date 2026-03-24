#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_5;
class Class_2_B6DD07FF764A38ED;
class Class_3_025FF4981524A424_52;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_B6DD07FF764A38ED_CLASS_1_E7349907628B16B0_METHOD_1_04F02FC65FAA2E0C_OFFSET UNITYSDK_OFFSET(0x66CCBF0)
#define CLASS_2_B6DD07FF764A38ED_CLASS_1_E7349907628B16B0_METHOD_1_A3B750FF0054A8C9_OFFSET UNITYSDK_OFFSET(0x66CCB60)
#define CLASS_2_B6DD07FF764A38ED_CLASS_1_E7349907628B16B0__CTOR_OFFSET UNITYSDK_OFFSET(0x66CCB50)

inline static constexpr unsigned int Class_2_B6DD07FF764A38ED_Class_1_E7349907628B16B0_TypeDefinitionIndex = 56584;

class Class_2_B6DD07FF764A38ED_Class_1_E7349907628B16B0 : public ::System::Object
{
public:
	::System::Action_1<::Class_0_16E4307DCC419505_5*>* Field_1_2; // 0x10
	::System::Action* Field_1_3; // 0x18
	::System::Action_1<::System::Action*>* Field_1_0; // 0x20
	::Class_2_B6DD07FF764A38ED* Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B6DD07FF764A38ED_CLASS_1_E7349907628B16B0__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A3B750FF0054A8C9(::Class_3_025FF4981524A424_52* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_025FF4981524A424_52*))((::PBYTE)hIl2Cpp + CLASS_2_B6DD07FF764A38ED_CLASS_1_E7349907628B16B0_METHOD_1_A3B750FF0054A8C9_OFFSET))(this, a1);
	}

	::System::Void Method_1_04F02FC65FAA2E0C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B6DD07FF764A38ED_CLASS_1_E7349907628B16B0_METHOD_1_04F02FC65FAA2E0C_OFFSET))(this);
	}
};
