#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Struct_2_0389E20EE68DEFB0.h"
#include "unitysdk/System/Object.h"

class Class_1_0BCE4BE98C879308_1;
class Class_1_236FD73ABC492E3F;
namespace System { class String; }

#define CLASS_1_F3015B35632CC97C_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x5E8FC90)
#define CLASS_1_F3015B35632CC97C_FROMFLX_OFFSET UNITYSDK_OFFSET(0x5E8F760)
#define CLASS_1_F3015B35632CC97C_METHOD_1_0C68707A0DB4A5B6_OFFSET UNITYSDK_OFFSET(0x5E8FFF0)
#define CLASS_1_F3015B35632CC97C_METHOD_1_DF413489329CBAF8_OFFSET UNITYSDK_OFFSET(0x5E8F850)
#define CLASS_1_F3015B35632CC97C_METHOD_1_F1153A4377815E0F_OFFSET UNITYSDK_OFFSET(0x5E8FD60)
#define CLASS_1_F3015B35632CC97C__CTOR_OFFSET UNITYSDK_OFFSET(0x5E8FFE0)

inline static constexpr unsigned int Class_1_F3015B35632CC97C_TypeDefinitionIndex = 48466;

class Class_1_F3015B35632CC97C : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::Il2CppArray<::Class_1_0BCE4BE98C879308_1*>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3015B35632CC97C__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_F3015B35632CC97C_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F3015B35632CC97C_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_0C68707A0DB4A5B6(::Struct_2_0389E20EE68DEFB0& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_0389E20EE68DEFB0&))((::PBYTE)hIl2Cpp + CLASS_1_F3015B35632CC97C_METHOD_1_0C68707A0DB4A5B6_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F1153A4377815E0F(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F3015B35632CC97C_METHOD_1_F1153A4377815E0F_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_DF413489329CBAF8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_F3015B35632CC97C_METHOD_1_DF413489329CBAF8_OFFSET))(this, a1);
	}
};
