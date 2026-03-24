#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
class Class_1_940E58BD1D2F1B5D;
class Class_1_D2BA87226C48A494;
namespace MoleMole::Config { class ConfigDecorBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_51F18DE714A14AD9_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xA747FA0)
#define CLASS_1_51F18DE714A14AD9_FROMFLX_OFFSET UNITYSDK_OFFSET(0xA7473C0)
#define CLASS_1_51F18DE714A14AD9_METHOD_1_0BD393E566CD3D4A_OFFSET UNITYSDK_OFFSET(0xA747440)
#define CLASS_1_51F18DE714A14AD9_METHOD_1_F97D2DA1083CFECF_OFFSET UNITYSDK_OFFSET(0xA748000)
#define CLASS_1_51F18DE714A14AD9__CTOR_OFFSET UNITYSDK_OFFSET(0xA7485E0)

inline static constexpr unsigned int Class_1_51F18DE714A14AD9_TypeDefinitionIndex = 66915;

class Class_1_51F18DE714A14AD9 : public ::System::Object
{
public:
	::System::String* Field_1_2; // 0x10
	::System::Collections::Generic::List_1<::Class_1_D2BA87226C48A494*>* Field_1_6; // 0x18
	::System::String* Field_1_1; // 0x20
	::Class_1_940E58BD1D2F1B5D* Field_1_5; // 0x28
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigDecorBase*>* Field_1_4; // 0x30
	::System::Int32 Field_1_0; // 0x38
	::System::Int32 Field_1_3; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51F18DE714A14AD9__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_51F18DE714A14AD9_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_51F18DE714A14AD9_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F97D2DA1083CFECF(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_51F18DE714A14AD9_METHOD_1_F97D2DA1083CFECF_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_0BD393E566CD3D4A(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_51F18DE714A14AD9_METHOD_1_0BD393E566CD3D4A_OFFSET))(this, a1);
	}
};
