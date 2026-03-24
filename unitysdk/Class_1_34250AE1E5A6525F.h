#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Struct_2_0389E20EE68DEFB0.h"
#include "unitysdk/System/Object.h"

class Class_1_0BCE4BE98C879308;
class Class_1_236FD73ABC492E3F;
namespace System { class String; }

#define CLASS_1_34250AE1E5A6525F_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xABEBD90)
#define CLASS_1_34250AE1E5A6525F_FROMFLX_OFFSET UNITYSDK_OFFSET(0xABEB860)
#define CLASS_1_34250AE1E5A6525F_METHOD_1_0C68707A0DB4A5B6_OFFSET UNITYSDK_OFFSET(0xABEC0F0)
#define CLASS_1_34250AE1E5A6525F_METHOD_1_DF413489329CBAF8_OFFSET UNITYSDK_OFFSET(0xABEB950)
#define CLASS_1_34250AE1E5A6525F_METHOD_1_F1153A4377815E0F_OFFSET UNITYSDK_OFFSET(0xABEBE60)
#define CLASS_1_34250AE1E5A6525F__CTOR_OFFSET UNITYSDK_OFFSET(0xABEC0E0)

inline static constexpr unsigned int Class_1_34250AE1E5A6525F_TypeDefinitionIndex = 69391;

class Class_1_34250AE1E5A6525F : public ::System::Object
{
public:
	::Il2CppArray<::Class_1_0BCE4BE98C879308*>* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34250AE1E5A6525F__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_34250AE1E5A6525F_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_34250AE1E5A6525F_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_0C68707A0DB4A5B6(::Struct_2_0389E20EE68DEFB0& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_0389E20EE68DEFB0&))((::PBYTE)hIl2Cpp + CLASS_1_34250AE1E5A6525F_METHOD_1_0C68707A0DB4A5B6_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_DF413489329CBAF8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_34250AE1E5A6525F_METHOD_1_DF413489329CBAF8_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F1153A4377815E0F(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_34250AE1E5A6525F_METHOD_1_F1153A4377815E0F_OFFSET))(this, a1, a2);
	}
};
