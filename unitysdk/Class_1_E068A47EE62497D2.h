#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigBlackboardParam.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_134;
class Class_1_236FD73ABC492E3F;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E068A47EE62497D2_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xD7473B0)
#define CLASS_1_E068A47EE62497D2_FROMFLX_OFFSET UNITYSDK_OFFSET(0xD746F20)
#define CLASS_1_E068A47EE62497D2_METHOD_1_1A0B790695E07CE5_OFFSET UNITYSDK_OFFSET(0xD747410)
#define CLASS_1_E068A47EE62497D2_METHOD_1_6398A8B4AB096BB5_OFFSET UNITYSDK_OFFSET(0xD746D90)
#define CLASS_1_E068A47EE62497D2_METHOD_1_DF413489329CBAF8_OFFSET UNITYSDK_OFFSET(0xD746FA0)
#define CLASS_1_E068A47EE62497D2__CTOR_OFFSET UNITYSDK_OFFSET(0xD747620)

inline static constexpr unsigned int Class_1_E068A47EE62497D2_TypeDefinitionIndex = 73264;

class Class_1_E068A47EE62497D2 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E068A47EE62497D2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6398A8B4AB096BB5(::Class_0_16E4307DCC419505_134* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_134*))((::PBYTE)hIl2Cpp + CLASS_1_E068A47EE62497D2_METHOD_1_6398A8B4AB096BB5_OFFSET))(this, a1);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_E068A47EE62497D2_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E068A47EE62497D2_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_1A0B790695E07CE5(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E068A47EE62497D2_METHOD_1_1A0B790695E07CE5_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_DF413489329CBAF8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_E068A47EE62497D2_METHOD_1_DF413489329CBAF8_OFFSET))(this, a1);
	}
};
