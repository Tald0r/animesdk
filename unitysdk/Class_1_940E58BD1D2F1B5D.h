#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }

#define CLASS_1_940E58BD1D2F1B5D_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x7208A00)
#define CLASS_1_940E58BD1D2F1B5D_FROMFLX_OFFSET UNITYSDK_OFFSET(0x7208610)
#define CLASS_1_940E58BD1D2F1B5D_METHOD_1_25996F1180FB0C28_OFFSET UNITYSDK_OFFSET(0x7208A60)
#define CLASS_1_940E58BD1D2F1B5D_METHOD_1_4E5AC15A8307DCD8_OFFSET UNITYSDK_OFFSET(0x7208690)
#define CLASS_1_940E58BD1D2F1B5D__CTOR_OFFSET UNITYSDK_OFFSET(0x7208CF0)

inline static constexpr unsigned int Class_1_940E58BD1D2F1B5D_TypeDefinitionIndex = 41147;

class Class_1_940E58BD1D2F1B5D : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::System::Int32 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_940E58BD1D2F1B5D__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_940E58BD1D2F1B5D_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_940E58BD1D2F1B5D_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_4E5AC15A8307DCD8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_940E58BD1D2F1B5D_METHOD_1_4E5AC15A8307DCD8_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_25996F1180FB0C28(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_940E58BD1D2F1B5D_METHOD_1_25996F1180FB0C28_OFFSET))(this, a1, a2);
	}
};
