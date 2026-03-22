#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_8CC859447F33469F;
class Class_3_F35B080B137ECC46;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_1504718875B19717___C_METHOD_1_99EE13155CC3E19F_OFFSET UNITYSDK_OFFSET(0x9D29380)
#define CLASS_3_1504718875B19717___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9D29330)
#define CLASS_3_1504718875B19717___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9D29370)

inline static constexpr unsigned int Class_3_1504718875B19717___c_TypeDefinitionIndex = 63450;

class Class_3_1504718875B19717___c : public ::System::Object
{
public:
	static ::System::Action_2<::Class_3_F35B080B137ECC46*, ::Class_3_8CC859447F33469F*>** StaticGet___9__2_0()
	{
		return (::System::Action_2<::Class_3_F35B080B137ECC46*, ::Class_3_8CC859447F33469F*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_1504718875B19717___c_TypeDefinitionIndex)->GetStaticField(0x44430);
	}
	static ::Class_3_1504718875B19717___c** StaticGet___9()
	{
		return (::Class_3_1504718875B19717___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_1504718875B19717___c_TypeDefinitionIndex)->GetStaticField(0x44438);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_1504718875B19717___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1504718875B19717___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_99EE13155CC3E19F(::Class_3_F35B080B137ECC46* a1, ::Class_3_8CC859447F33469F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F35B080B137ECC46*, ::Class_3_8CC859447F33469F*))((::PBYTE)hIl2Cpp + CLASS_3_1504718875B19717___C_METHOD_1_99EE13155CC3E19F_OFFSET))(this, a1, a2);
	}
};
