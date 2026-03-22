#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5C894A86A15DAEED_Struct_2_03315CF1422390A1_2.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_719;
namespace MoleMole::Battle { class Entity; }

#define CLASS_1_5C894A86A15DAEED_METHOD_1_21E642667E914817_OFFSET UNITYSDK_OFFSET(0xA07A170)
#define CLASS_1_5C894A86A15DAEED_METHOD_1_255C2D8E523BDDFC_OFFSET UNITYSDK_OFFSET(0xA07A2B0)
#define CLASS_1_5C894A86A15DAEED_METHOD_1_7C2B8FFBE67ABB82_OFFSET UNITYSDK_OFFSET(0xA07A6C0)
#define CLASS_1_5C894A86A15DAEED_METHOD_1_DFF98536D8B4074F_OFFSET UNITYSDK_OFFSET(0xA07A010)
#define CLASS_1_5C894A86A15DAEED__CCTOR_OFFSET UNITYSDK_OFFSET(0xA079FD0)

inline static constexpr unsigned int Class_1_5C894A86A15DAEED_TypeDefinitionIndex = 79136;

class Class_1_5C894A86A15DAEED : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5C894A86A15DAEED_TypeDefinitionIndex)->GetStaticField(0xE110);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5C894A86A15DAEED__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_DFF98536D8B4074F()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_5C894A86A15DAEED_METHOD_1_DFF98536D8B4074F_OFFSET))();
	}

	static ::Class_2_208CC9941471731A_719* Method_1_21E642667E914817(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_719*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5C894A86A15DAEED_METHOD_1_21E642667E914817_OFFSET))(a1);
	}

	static ::System::Nullable_1<::Class_1_5C894A86A15DAEED_Struct_2_03315CF1422390A1_2> Method_1_255C2D8E523BDDFC(::System::UInt32 a1, ::System::Int32 a2)
	{
		return ((::System::Nullable_1<::Class_1_5C894A86A15DAEED_Struct_2_03315CF1422390A1_2>(*)(::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5C894A86A15DAEED_METHOD_1_255C2D8E523BDDFC_OFFSET))(a1, a2);
	}

	static ::MoleMole::Battle::Entity* Method_1_7C2B8FFBE67ABB82(::System::UInt32 a1)
	{
		return ((::MoleMole::Battle::Entity*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5C894A86A15DAEED_METHOD_1_7C2B8FFBE67ABB82_OFFSET))(a1);
	}
};
