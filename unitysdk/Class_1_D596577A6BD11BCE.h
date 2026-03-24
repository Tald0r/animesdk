#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
class Class_1_EF896E1D0FDF202A;
namespace MoleMole::Config { class DynamicFloat; }
namespace System { class String; }

#define CLASS_1_D596577A6BD11BCE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xD6ADEB0)
#define CLASS_1_D596577A6BD11BCE_FROMFLX_OFFSET UNITYSDK_OFFSET(0xD6AE2A0)
#define CLASS_1_D596577A6BD11BCE_METHOD_1_034C81DB422D5131_OFFSET UNITYSDK_OFFSET(0xD6ADF10)
#define CLASS_1_D596577A6BD11BCE_METHOD_1_4E5AC15A8307DCD8_OFFSET UNITYSDK_OFFSET(0xD6AE320)
#define CLASS_1_D596577A6BD11BCE__CTOR_OFFSET UNITYSDK_OFFSET(0xD6AEC90)

inline static constexpr unsigned int Class_1_D596577A6BD11BCE_TypeDefinitionIndex = 57628;

class Class_1_D596577A6BD11BCE : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::MoleMole::Config::DynamicFloat* Field_1_4; // 0x18
	::MoleMole::Config::DynamicFloat* Field_1_3; // 0x20
	::Il2CppArray<::Class_1_EF896E1D0FDF202A*>* Field_1_5; // 0x28
	::MoleMole::Config::BaseProperty Field_1_0; // 0x30
	::MoleMole::Config::PropertyModifyFunction Field_1_2; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D596577A6BD11BCE__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D596577A6BD11BCE_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_D596577A6BD11BCE_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_034C81DB422D5131(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D596577A6BD11BCE_METHOD_1_034C81DB422D5131_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_4E5AC15A8307DCD8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_D596577A6BD11BCE_METHOD_1_4E5AC15A8307DCD8_OFFSET))(this, a1);
	}
};
