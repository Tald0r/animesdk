#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F57C3EEEB03201AF.h"
#include "unitysdk/Foundation/AssetPath.h"

class Class_2_CC6C6812D7C240D5;
template <typename T> class Class_0_16E4307DCC419505_103;
template <typename T> class Class_2_75527B5277EE1A90;

#define CLASS_2_1A6E14149888D98C_METHOD_2_507A5122CD01412B_OFFSET UNITYSDK_OFFSET(0x6D2F560)
#define CLASS_2_1A6E14149888D98C_METHOD_2_AA577F2F6FC9C010_OFFSET UNITYSDK_OFFSET(0x6D2FCB0)
#define CLASS_2_1A6E14149888D98C_METHOD_2_C58793D9D6FBCA00_OFFSET UNITYSDK_OFFSET(0x6D2F970)
#define CLASS_2_1A6E14149888D98C_METHOD_2_D422300B758FC203_OFFSET UNITYSDK_OFFSET(0x6D2F6F0)
#define CLASS_2_1A6E14149888D98C_METHOD_2_D9E0706C42215FC9_OFFSET UNITYSDK_OFFSET(0x6D2F230)
#define CLASS_2_1A6E14149888D98C_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x6D2EF60)
#define CLASS_2_1A6E14149888D98C__CTOR_OFFSET UNITYSDK_OFFSET(0x6D2F1B0)

inline static constexpr unsigned int Class_2_1A6E14149888D98C_TypeDefinitionIndex = 39952;

class Class_2_1A6E14149888D98C : public ::Class_1_F57C3EEEB03201AF
{
public:
	::Class_0_16E4307DCC419505_103<::Class_2_CC6C6812D7C240D5*>* Field_2_2; // 0x60
	::Class_2_75527B5277EE1A90<::System::Boolean>* Field_2_6; // 0x68
	::Class_2_75527B5277EE1A90<::System::Boolean>* Field_2_5; // 0x70
	::Class_0_16E4307DCC419505_103<::System::Boolean>* Field_2_0; // 0x78
	::Class_2_75527B5277EE1A90<::Foundation::AssetPath>* Field_2_4; // 0x80
	::Class_0_16E4307DCC419505_103<::System::Boolean>* Field_2_1; // 0x88
	::Class_2_75527B5277EE1A90<::System::Int32>* Field_2_3; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A6E14149888D98C__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A6E14149888D98C_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Int32 Method_2_D9E0706C42215FC9()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A6E14149888D98C_METHOD_2_D9E0706C42215FC9_OFFSET))(this);
	}

	::System::Boolean Method_2_507A5122CD01412B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A6E14149888D98C_METHOD_2_507A5122CD01412B_OFFSET))(this);
	}

	::System::Void Method_2_D422300B758FC203(::Class_2_CC6C6812D7C240D5* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_CC6C6812D7C240D5*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1A6E14149888D98C_METHOD_2_D422300B758FC203_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_C58793D9D6FBCA00()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A6E14149888D98C_METHOD_2_C58793D9D6FBCA00_OFFSET))(this);
	}

	::Foundation::AssetPath Method_2_AA577F2F6FC9C010()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A6E14149888D98C_METHOD_2_AA577F2F6FC9C010_OFFSET))(this);
	}
};
