#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_91;

#define CLASS_1_1E81B4CC83D8BE8A_METHOD_1_0DCA45EDA639F38E_OFFSET UNITYSDK_OFFSET(0x1A0D7200)
#define CLASS_1_1E81B4CC83D8BE8A_METHOD_1_E34BFB774E2D1CD4_OFFSET UNITYSDK_OFFSET(0x1A0D7470)
#define CLASS_1_1E81B4CC83D8BE8A__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A0D71C0)

inline static constexpr unsigned int Class_1_1E81B4CC83D8BE8A_TypeDefinitionIndex = 31838;

class Class_1_1E81B4CC83D8BE8A : public ::System::Object
{
public:
	static ::Class_0_16E4307DCC419505_91** StaticGet_Field_1_1()
	{
		return (::Class_0_16E4307DCC419505_91**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1E81B4CC83D8BE8A_TypeDefinitionIndex)->GetStaticField(0x24FE0);
	}
	static ::System::Object** StaticGet_Field_1_0()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1E81B4CC83D8BE8A_TypeDefinitionIndex)->GetStaticField(0x24FE8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1E81B4CC83D8BE8A__CCTOR_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_91* Method_1_0DCA45EDA639F38E()
	{
		return ((::Class_0_16E4307DCC419505_91*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1E81B4CC83D8BE8A_METHOD_1_0DCA45EDA639F38E_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_91* Method_1_E34BFB774E2D1CD4()
	{
		return ((::Class_0_16E4307DCC419505_91*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1E81B4CC83D8BE8A_METHOD_1_E34BFB774E2D1CD4_OFFSET))();
	}
};
