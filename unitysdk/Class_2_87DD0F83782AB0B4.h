#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8088D8743C1058EF.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class Class_1_236FD73ABC492E3F;
class Class_1_ED5EE319EA265EB6;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_87DD0F83782AB0B4_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x6B70E10)
#define CLASS_2_87DD0F83782AB0B4_FROMFLX_OFFSET UNITYSDK_OFFSET(0x6B706F0)
#define CLASS_2_87DD0F83782AB0B4_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0x6B71230)
#define CLASS_2_87DD0F83782AB0B4_METHOD_2_0BD393E566CD3D4A_OFFSET UNITYSDK_OFFSET(0x6B70770)
#define CLASS_2_87DD0F83782AB0B4_METHOD_2_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0x6B705C0)
#define CLASS_2_87DD0F83782AB0B4_METHOD_2_C8D6B29192F288ED_OFFSET UNITYSDK_OFFSET(0x6B6FDA0)
#define CLASS_2_87DD0F83782AB0B4_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x6B71540)
#define CLASS_2_87DD0F83782AB0B4_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0x6B713E0)
#define CLASS_2_87DD0F83782AB0B4_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x6B704C0)
#define CLASS_2_87DD0F83782AB0B4_METHOD_2_D8A375BA431DF6B3_OFFSET UNITYSDK_OFFSET(0x6B703F0)
#define CLASS_2_87DD0F83782AB0B4_METHOD_2_E061DA2D9F264BD1_OFFSET UNITYSDK_OFFSET(0x6B70E70)
#define CLASS_2_87DD0F83782AB0B4__CTOR_OFFSET UNITYSDK_OFFSET(0x6B711D0)

inline static constexpr unsigned int Class_2_87DD0F83782AB0B4_TypeDefinitionIndex = 55264;

class Class_2_87DD0F83782AB0B4 : public ::Class_1_8088D8743C1058EF
{
public:
	::System::String* Field_2_2; // 0x30
	::System::String* Field_2_1; // 0x38
	::Class_1_ED5EE319EA265EB6* Field_2_0; // 0x40
	::System::Collections::Generic::List_1<::Class_1_ED5EE319EA265EB6*>* Field_2_3; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87DD0F83782AB0B4__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_C8D6B29192F288ED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87DD0F83782AB0B4_METHOD_2_C8D6B29192F288ED_OFFSET))(this);
	}

	::System::Void Method_2_D8A375BA431DF6B3(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_87DD0F83782AB0B4_METHOD_2_D8A375BA431DF6B3_OFFSET))(this, a1);
	}

	::Class_1_8088D8743C1058EF* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_8088D8743C1058EF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87DD0F83782AB0B4_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_B525722F60E6B94F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87DD0F83782AB0B4_METHOD_2_B525722F60E6B94F_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_87DD0F83782AB0B4_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_87DD0F83782AB0B4_FROMBINARY_OFFSET))(this, a1, a2);
	}

	static ::Class_2_87DD0F83782AB0B4* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_87DD0F83782AB0B4*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_87DD0F83782AB0B4_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_E061DA2D9F264BD1(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_87DD0F83782AB0B4_METHOD_2_E061DA2D9F264BD1_OFFSET))(this, a1, a2);
	}

	static ::Class_2_87DD0F83782AB0B4* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_87DD0F83782AB0B4*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_87DD0F83782AB0B4_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87DD0F83782AB0B4_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_2_0BD393E566CD3D4A(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_87DD0F83782AB0B4_METHOD_2_0BD393E566CD3D4A_OFFSET))(this, a1);
	}
};
