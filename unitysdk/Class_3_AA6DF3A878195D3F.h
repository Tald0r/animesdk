#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"

class Class_1_B47C47D83A1EF455;
class Class_1_BAB420867AF96826;
namespace MoleMole { class AnimatorBlendGroup; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_AA6DF3A878195D3F_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x996CD30)
#define CLASS_3_AA6DF3A878195D3F_METHOD_3_82E988EF9F701C23_OFFSET UNITYSDK_OFFSET(0x996D280)
#define CLASS_3_AA6DF3A878195D3F_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x996D120)
#define CLASS_3_AA6DF3A878195D3F_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x996D0C0)
#define CLASS_3_AA6DF3A878195D3F_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x996D1E0)
#define CLASS_3_AA6DF3A878195D3F_METHOD_3_DAC1946C2FF7F4DA_OFFSET UNITYSDK_OFFSET(0x996D360)
#define CLASS_3_AA6DF3A878195D3F_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x996CB20)
#define CLASS_3_AA6DF3A878195D3F__CCTOR_OFFSET UNITYSDK_OFFSET(0x996CD90)
#define CLASS_3_AA6DF3A878195D3F__CTOR_OFFSET UNITYSDK_OFFSET(0x996CE10)

inline static constexpr unsigned int Class_3_AA6DF3A878195D3F_TypeDefinitionIndex = 62222;

class Class_3_AA6DF3A878195D3F : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	static ::System::Int32* StaticGet_Field_3_20()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_AA6DF3A878195D3F_TypeDefinitionIndex)->GetStaticField(0xEAE0);
	}
	// static const ::System::Int32 Field_3_21 = 0x27; // 0x0
	::System::Collections::Generic::List_1<::Class_1_B47C47D83A1EF455*>* Field_3_0; // 0x48
	::System::String* Field_3_15; // 0x50
	::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_BAB420867AF96826*>*>* Field_3_19; // 0x58
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Field_3_14; // 0x60
	::MoleMole::AnimatorBlendGroup* Field_3_18; // 0x68
	::MoleMole::AnimatorBlendGroup* Field_3_17; // 0x70
	::System::Single Field_3_6; // 0x78
	::System::Single Field_3_11; // 0x7C
	::System::Single Field_3_3; // 0x80
	::System::Single Field_3_12; // 0x84
	::System::Single Field_3_8; // 0x88
	::System::Boolean Field_3_1; // 0x8C
	::System::Single Field_3_16; // 0x90
	::System::Single Field_3_10; // 0x94
	::System::Single Field_3_5; // 0x98
	::System::Single Field_3_7; // 0x9C
	::System::Single Field_3_4; // 0xA0
	::System::Single Field_3_2; // 0xA4
	::System::Single Field_3_13; // 0xA8
	::System::Single Field_3_9; // 0xAC

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_AA6DF3A878195D3F__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AA6DF3A878195D3F__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AA6DF3A878195D3F_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AA6DF3A878195D3F_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AA6DF3A878195D3F_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_3_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AA6DF3A878195D3F_METHOD_3_9681042564541CD6_OFFSET))(this);
	}

	static ::Class_3_AA6DF3A878195D3F* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_AA6DF3A878195D3F*(*)())((::PBYTE)hIl2Cpp + CLASS_3_AA6DF3A878195D3F_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_BAB420867AF96826*>* Method_3_82E988EF9F701C23()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_BAB420867AF96826*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AA6DF3A878195D3F_METHOD_3_82E988EF9F701C23_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_BAB420867AF96826*>* Method_3_DAC1946C2FF7F4DA()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_BAB420867AF96826*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AA6DF3A878195D3F_METHOD_3_DAC1946C2FF7F4DA_OFFSET))(this);
	}
};
