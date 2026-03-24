#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_3.h"
#include "unitysdk/System/Object.h"

#define CLASS_3_6187A10BAB170F19___C_METHOD_1_4C706B6019B13D4A_OFFSET UNITYSDK_OFFSET(0x17BF29F0)
#define CLASS_3_6187A10BAB170F19___C_METHOD_1_7439D2F0DCA77B50_OFFSET UNITYSDK_OFFSET(0x17BF29E0)
#define CLASS_3_6187A10BAB170F19___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17BF2990)
#define CLASS_3_6187A10BAB170F19___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17BF29D0)

inline static constexpr unsigned int Class_3_6187A10BAB170F19___c_TypeDefinitionIndex = 22797;

class Class_3_6187A10BAB170F19___c : public ::System::Object
{
public:
	static ::Class_3_6187A10BAB170F19___c** StaticGet___9()
	{
		return (::Class_3_6187A10BAB170F19___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_6187A10BAB170F19___c_TypeDefinitionIndex)->GetStaticField(0x160D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_6187A10BAB170F19___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6187A10BAB170F19___C__CTOR_OFFSET))(this);
	}

	::Enum_3_ED790DAC948A65A9_3 Method_1_7439D2F0DCA77B50(::System::Int32 a1)
	{
		return ((::Enum_3_ED790DAC948A65A9_3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_6187A10BAB170F19___C_METHOD_1_7439D2F0DCA77B50_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_4C706B6019B13D4A(::Enum_3_ED790DAC948A65A9_3 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Enum_3_ED790DAC948A65A9_3))((::PBYTE)hIl2Cpp + CLASS_3_6187A10BAB170F19___C_METHOD_1_4C706B6019B13D4A_OFFSET))(this, a1);
	}
};
