#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F33340E023067DAF.h"
#include "unitysdk/Class_3_22FDC730CC26B7BA_Struct_2_18D6C498A4DB832E.h"
#include "unitysdk/Class_3_22FDC730CC26B7BA_Struct_2_E71A4E719BBCD0AD_4.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_28.h"
#include "unitysdk/Enum_3_37C78CBCFBD3EE37.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_6DA7B27D0F38CD4F;
class Class_1_7F72DB9FB37DF3E5;
class Class_1_B7E341C5F1A6F199;
class Class_1_FE9ECF98C0BD94FC;
class Class_2_208CC9941471731A_149;
class Class_3_621E396E538604DB;
class Class_3_F2DAD7F45F518868;
class Class_3_F33F9DC5F4112336;
class Class_3_F35B080B137ECC46;
namespace MoleMole { class InteractionPoint; }
namespace MoleMole { class MonoItemState; }
namespace MoleMole { class MonoNpcLookIKParameter; }
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_3_22FDC730CC26B7BA_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x91593D0)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_0206FE251932D155_OFFSET UNITYSDK_OFFSET(0x9159FA0)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_04EF1AC77604E2F3_OFFSET UNITYSDK_OFFSET(0x915F5A0)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_058C12B39FE35670_OFFSET UNITYSDK_OFFSET(0x915E5C0)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_0792C269E4075B81_OFFSET UNITYSDK_OFFSET(0x7A91D00)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_0D0048434D9EA417_OFFSET UNITYSDK_OFFSET(0x9167140)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_0EEBC5B02662527C_OFFSET UNITYSDK_OFFSET(0x915F860)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_12B31A1CE53B715D_OFFSET UNITYSDK_OFFSET(0x9166290)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_14E9BE7825EB14E3_OFFSET UNITYSDK_OFFSET(0x7A92410)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_1A1AC2C2C06AA84E_OFFSET UNITYSDK_OFFSET(0x915E210)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_1D34C702CB91E671_OFFSET UNITYSDK_OFFSET(0x91617D0)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_20EF9F24F9CDC26B_OFFSET UNITYSDK_OFFSET(0x9160970)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_254E44B3167CB56C_OFFSET UNITYSDK_OFFSET(0x915E9F0)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_278A5A0F66F14F0F_OFFSET UNITYSDK_OFFSET(0x9167610)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_295DC306422D817C_OFFSET UNITYSDK_OFFSET(0x91626D0)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_2B85B3F84CD2B89A_OFFSET UNITYSDK_OFFSET(0x9161F00)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_2C288D690B5365D6_OFFSET UNITYSDK_OFFSET(0x9166DA0)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_309BD08D1A4B5C7E_OFFSET UNITYSDK_OFFSET(0x7A907F0)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_39EDE1FC10F145B1_OFFSET UNITYSDK_OFFSET(0x7A90360)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_4006C95C27B46B5B_OFFSET UNITYSDK_OFFSET(0x91672B0)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_5290C94396B890B8_OFFSET UNITYSDK_OFFSET(0x91677D0)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_60A88E197FF28F6F_OFFSET UNITYSDK_OFFSET(0x7A908E0)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_64FEF20B99B6ADC1_OFFSET UNITYSDK_OFFSET(0x7A909C0)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_65816B992DDD0103_OFFSET UNITYSDK_OFFSET(0x9161B50)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_65EEF664DED84683_OFFSET UNITYSDK_OFFSET(0x9161D90)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_662D7F28827051C1_OFFSET UNITYSDK_OFFSET(0x91631C0)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_68D142A66D792D93_OFFSET UNITYSDK_OFFSET(0x915A2F0)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_6B160B3CA0C58662_OFFSET UNITYSDK_OFFSET(0x9160060)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_6C6547FDC801E67D_OFFSET UNITYSDK_OFFSET(0x915D0A0)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_707AB189A8551B5B_OFFSET UNITYSDK_OFFSET(0x9162380)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_70FC9388532E1C86_OFFSET UNITYSDK_OFFSET(0x7A90A80)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_7244DA2385501B91_OFFSET UNITYSDK_OFFSET(0x915DD20)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_729A6D5E10A4D7A7_OFFSET UNITYSDK_OFFSET(0x9160FB0)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_797B0DC3D00A8877_OFFSET UNITYSDK_OFFSET(0x915F540)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_88313D56CAFB4AAA_OFFSET UNITYSDK_OFFSET(0x915BE10)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_8A352D0131623012_OFFSET UNITYSDK_OFFSET(0x9165EB0)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_8A9CC55F24CCA0D4_OFFSET UNITYSDK_OFFSET(0x915DB60)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_8B5DE8EBDD39D2D2_OFFSET UNITYSDK_OFFSET(0x9159A00)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_8DE819A71CB1687F_OFFSET UNITYSDK_OFFSET(0x9166BA0)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_90889A6A6929E4BE_OFFSET UNITYSDK_OFFSET(0x915EBB0)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_956900A3AE2A9232_OFFSET UNITYSDK_OFFSET(0x9164BA0)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_961D62EEA00CF5D9_OFFSET UNITYSDK_OFFSET(0x9162750)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_975AAA4FE07A4D30_OFFSET UNITYSDK_OFFSET(0x91667E0)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_A8518C4D4078676C_OFFSET UNITYSDK_OFFSET(0x9167B40)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_A8873BD99FA16A0B_OFFSET UNITYSDK_OFFSET(0x915FC10)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_ACDC0CFA11A652D0_OFFSET UNITYSDK_OFFSET(0x7A91AC0)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_B1036099F932819B_OFFSET UNITYSDK_OFFSET(0x7A91920)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_B66C6BF760CFAEC7_OFFSET UNITYSDK_OFFSET(0x9162520)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_B6EEE689B821354E_OFFSET UNITYSDK_OFFSET(0x915A6C0)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x915DAF0)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_BAE329CBE121CA0B_OFFSET UNITYSDK_OFFSET(0x9165880)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_C17A86673497E052_OFFSET UNITYSDK_OFFSET(0x9159C00)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_C2C24FF6AA72788C_OFFSET UNITYSDK_OFFSET(0x91655A0)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_C5AC7D6C9D8AAB42_OFFSET UNITYSDK_OFFSET(0x915D6F0)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_C5F4F94320B69423_OFFSET UNITYSDK_OFFSET(0x915D3B0)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_C731C8CCE6C3BA32_OFFSET UNITYSDK_OFFSET(0x915D470)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_C8B678E2CB980D17_OFFSET UNITYSDK_OFFSET(0x915D970)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x915E1B0)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_D996CB207304E68F_OFFSET UNITYSDK_OFFSET(0x9160AC0)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_DF2FF8BF97EDC90C_OFFSET UNITYSDK_OFFSET(0x9161A10)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_E0129F189B325BB6_OFFSET UNITYSDK_OFFSET(0x915A3B0)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_EDC7D0BECE59CC77_OFFSET UNITYSDK_OFFSET(0x915DE80)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_EE26BD50A884C75A_OFFSET UNITYSDK_OFFSET(0x915CEA0)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_F2E0E8A6CA4AB100_OFFSET UNITYSDK_OFFSET(0x91614B0)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_F43DABB11AEB8CA2_OFFSET UNITYSDK_OFFSET(0x9166780)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_F5B50F2A74C670C4_OFFSET UNITYSDK_OFFSET(0x9162B50)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_F679959B1EFB24CA_OFFSET UNITYSDK_OFFSET(0x9166FD0)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_F7BE6D9C58925E54_OFFSET UNITYSDK_OFFSET(0x91665B0)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_FE0A9AA6C0EC77F9_OFFSET UNITYSDK_OFFSET(0x9159E70)
#define CLASS_3_22FDC730CC26B7BA_UPDATE_OFFSET UNITYSDK_OFFSET(0x9159850)
#define CLASS_3_22FDC730CC26B7BA__CCTOR_OFFSET UNITYSDK_OFFSET(0x91599F0)
#define CLASS_3_22FDC730CC26B7BA__CTOR_OFFSET UNITYSDK_OFFSET(0x91599D0)

inline static constexpr unsigned int Class_3_22FDC730CC26B7BA_TypeDefinitionIndex = 75587;

class Class_3_22FDC730CC26B7BA : public ::Class_2_F33340E023067DAF
{
public:
	static ::System::Single* StaticGet_Field_3_5()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_22FDC730CC26B7BA_TypeDefinitionIndex)->GetStaticField(0xC190);
	}
	// static const ::System::Int32 Field_3_0 = 0x0; // 0x0
	// static const ::System::Int32 Field_3_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_3_2 = 0x2; // 0x0
	// static const ::System::Single Field_3_4; // 0x0
	// static const ::System::Single Field_3_6; // 0x0
	// static const ::System::Single Field_3_7; // 0x0
	::Nap::NapECS::EcsFilter* Field_3_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA__CCTOR_OFFSET))();
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_UPDATE_OFFSET))(this);
	}

	static ::System::Void Method_3_8B5DE8EBDD39D2D2(::MoleMole::Battle::Entity* a1, ::Class_3_621E396E538604DB* a2, ::Class_1_6DA7B27D0F38CD4F* a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Class_3_621E396E538604DB*, ::Class_1_6DA7B27D0F38CD4F*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_8B5DE8EBDD39D2D2_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_C17A86673497E052(::System::Int32 a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_C17A86673497E052_OFFSET))(a1, a2);
	}

	static ::MoleMole::MonoNpcLookIKParameter* Method_3_FE0A9AA6C0EC77F9(::Class_3_621E396E538604DB* a1, ::Class_3_F35B080B137ECC46* a2)
	{
		return ((::MoleMole::MonoNpcLookIKParameter*(*)(::Class_3_621E396E538604DB*, ::Class_3_F35B080B137ECC46*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_FE0A9AA6C0EC77F9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_0206FE251932D155(::Class_3_621E396E538604DB* a1, ::Class_3_F35B080B137ECC46* a2)
	{
		return ((::System::Void(*)(::Class_3_621E396E538604DB*, ::Class_3_F35B080B137ECC46*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_0206FE251932D155_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_EE26BD50A884C75A(::System::Int32 a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_EE26BD50A884C75A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_C5AC7D6C9D8AAB42(::System::Int32 a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_C5AC7D6C9D8AAB42_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_E0129F189B325BB6(::Class_3_621E396E538604DB* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::Class_3_621E396E538604DB*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_E0129F189B325BB6_OFFSET))(a1, a2);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_8A9CC55F24CCA0D4(::System::Int32 a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_8A9CC55F24CCA0D4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_EDC7D0BECE59CC77(::Class_3_621E396E538604DB* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Void(*)(::Class_3_621E396E538604DB*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_EDC7D0BECE59CC77_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_3_1A1AC2C2C06AA84E(::System::Int32 a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_1A1AC2C2C06AA84E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_058C12B39FE35670(::MoleMole::Battle::Entity* a1, ::Class_3_621E396E538604DB* a2, ::System::String* a3, ::System::Collections::Generic::IList_1<::System::String*>* a4, ::System::Action* a5)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Class_3_621E396E538604DB*, ::System::String*, ::System::Collections::Generic::IList_1<::System::String*>*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_058C12B39FE35670_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_B6EEE689B821354E(::Class_3_621E396E538604DB* a1, ::Class_3_F35B080B137ECC46* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::Class_3_621E396E538604DB*, ::Class_3_F35B080B137ECC46*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_B6EEE689B821354E_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_68D142A66D792D93(::MoleMole::Battle::Entity* a1, ::Class_3_621E396E538604DB* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Class_3_621E396E538604DB*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_68D142A66D792D93_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_3_A8873BD99FA16A0B(::System::Int32 a1, ::UnityEngine::Transform* a2, ::MoleMole::Battle::Entity* a3)
	{
		return ((::System::Boolean(*)(::System::Int32, ::UnityEngine::Transform*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_A8873BD99FA16A0B_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_3_797B0DC3D00A8877(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_797B0DC3D00A8877_OFFSET))(a1);
	}

	static ::System::Void Method_3_6B160B3CA0C58662(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_6B160B3CA0C58662_OFFSET))(a1);
	}

	static ::System::Void Method_3_729A6D5E10A4D7A7(::Class_3_621E396E538604DB* a1, ::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::System::Boolean>* a2, ::System::String* a3, ::MoleMole::MonoItemState* a4)
	{
		return ((::System::Void(*)(::Class_3_621E396E538604DB*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::System::Boolean>*, ::System::String*, ::MoleMole::MonoItemState*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_729A6D5E10A4D7A7_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_3_6C6547FDC801E67D(::System::Int32 a1, ::Enum_3_0A3761FE34514D6C_28 a2, ::MoleMole::Battle::Entity* a3)
	{
		return ((::System::Boolean(*)(::System::Int32, ::Enum_3_0A3761FE34514D6C_28, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_6C6547FDC801E67D_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_1D34C702CB91E671(::Enum_3_0A3761FE34514D6C_28 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::Enum_3_0A3761FE34514D6C_28, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_1D34C702CB91E671_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_DF2FF8BF97EDC90C(::MoleMole::Battle::Entity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_DF2FF8BF97EDC90C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_65816B992DDD0103(::Class_3_621E396E538604DB* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_3_621E396E538604DB*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_65816B992DDD0103_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_65EEF664DED84683(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_65EEF664DED84683_OFFSET))(a1);
	}

	static ::System::Void Method_3_2B85B3F84CD2B89A(::Class_3_F35B080B137ECC46* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::Class_3_F35B080B137ECC46*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_2B85B3F84CD2B89A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_C731C8CCE6C3BA32(::Enum_3_0A3761FE34514D6C_28 a1, ::System::Int32 a2, ::System::Action* a3, ::System::Action* a4, ::MoleMole::Battle::Entity* a5)
	{
		return ((::System::Void(*)(::Enum_3_0A3761FE34514D6C_28, ::System::Int32, ::System::Action*, ::System::Action*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_C731C8CCE6C3BA32_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_707AB189A8551B5B(::System::Int32 a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_707AB189A8551B5B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_B66C6BF760CFAEC7(::Class_3_621E396E538604DB* a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Class_3_621E396E538604DB*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_B66C6BF760CFAEC7_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_F5B50F2A74C670C4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_F5B50F2A74C670C4_OFFSET))(a1);
	}

	static ::System::Void Method_3_C8B678E2CB980D17(::System::Int32 a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_C8B678E2CB980D17_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_662D7F28827051C1(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_662D7F28827051C1_OFFSET))(a1);
	}

	static ::System::Void Method_3_C2C24FF6AA72788C(::MoleMole::Battle::Entity* a1, ::Enum_3_0A3761FE34514D6C_28 a2, ::System::Collections::Generic::List_1<::System::Int32>* a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Enum_3_0A3761FE34514D6C_28, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_C2C24FF6AA72788C_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_20EF9F24F9CDC26B(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_20EF9F24F9CDC26B_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_8A352D0131623012(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_8A352D0131623012_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_12B31A1CE53B715D(::MoleMole::Battle::Entity* a1, ::Enum_3_0A3761FE34514D6C_28 a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Enum_3_0A3761FE34514D6C_28))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_12B31A1CE53B715D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_F43DABB11AEB8CA2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_F43DABB11AEB8CA2_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_C5F4F94320B69423(::Enum_3_0A3761FE34514D6C_28 a1)
	{
		return ((::System::Boolean(*)(::Enum_3_0A3761FE34514D6C_28))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_C5F4F94320B69423_OFFSET))(a1);
	}

	static ::System::Void Method_3_975AAA4FE07A4D30(::Class_3_F35B080B137ECC46* a1, ::System::Collections::Generic::List_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>* a2)
	{
		return ((::System::Void(*)(::Class_3_F35B080B137ECC46*, ::System::Collections::Generic::List_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_975AAA4FE07A4D30_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_8DE819A71CB1687F(::Class_3_F2DAD7F45F518868* a1)
	{
		return ((::System::Void(*)(::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_8DE819A71CB1687F_OFFSET))(a1);
	}

	static ::System::Void Method_3_04EF1AC77604E2F3(::Class_3_621E396E538604DB* a1, ::MoleMole::Battle::Entity* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Class_3_621E396E538604DB*, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_04EF1AC77604E2F3_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_254E44B3167CB56C(::MoleMole::Battle::Entity* a1, ::Class_3_621E396E538604DB* a2, ::MoleMole::InteractionPoint* a3, ::Class_2_208CC9941471731A_149* a4, ::System::Action* a5, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a6)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Class_3_621E396E538604DB*, ::MoleMole::InteractionPoint*, ::Class_2_208CC9941471731A_149*, ::System::Action*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_254E44B3167CB56C_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_3_2C288D690B5365D6(::Class_3_F33F9DC5F4112336* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::Class_3_22FDC730CC26B7BA_Struct_2_E71A4E719BBCD0AD_4& a5)
	{
		return ((::System::Void(*)(::Class_3_F33F9DC5F4112336*, ::System::String*, ::System::String*, ::System::String*, ::Class_3_22FDC730CC26B7BA_Struct_2_E71A4E719BBCD0AD_4&))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_2C288D690B5365D6_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_961D62EEA00CF5D9(::MoleMole::Battle::Entity* a1, ::Enum_3_0A3761FE34514D6C_28 a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Enum_3_0A3761FE34514D6C_28))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_961D62EEA00CF5D9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_D996CB207304E68F(::Class_3_621E396E538604DB* a1, ::Class_3_F35B080B137ECC46* a2)
	{
		return ((::System::Void(*)(::Class_3_621E396E538604DB*, ::Class_3_F35B080B137ECC46*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_D996CB207304E68F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_F2E0E8A6CA4AB100(::Class_3_621E396E538604DB* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::Class_3_621E396E538604DB*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_F2E0E8A6CA4AB100_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_BAE329CBE121CA0B(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_BAE329CBE121CA0B_OFFSET))(a1);
	}

	static ::System::Int32 Method_3_295DC306422D817C(::System::Int32 a1, ::Enum_3_37C78CBCFBD3EE37 a2, ::System::Boolean a3)
	{
		return ((::System::Int32(*)(::System::Int32, ::Enum_3_37C78CBCFBD3EE37, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_295DC306422D817C_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_F679959B1EFB24CA(::Class_2_208CC9941471731A_149* a1, ::Class_3_621E396E538604DB* a2)
	{
		return ((::System::Void(*)(::Class_2_208CC9941471731A_149*, ::Class_3_621E396E538604DB*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_F679959B1EFB24CA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_0D0048434D9EA417(::Class_3_621E396E538604DB* a1, ::Class_3_F35B080B137ECC46* a2)
	{
		return ((::System::Void(*)(::Class_3_621E396E538604DB*, ::Class_3_F35B080B137ECC46*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_0D0048434D9EA417_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_4006C95C27B46B5B(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_4006C95C27B46B5B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_88313D56CAFB4AAA(::Class_3_621E396E538604DB* a1, ::Class_3_F2DAD7F45F518868* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::Class_3_621E396E538604DB*, ::Class_3_F2DAD7F45F518868*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_88313D56CAFB4AAA_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_7244DA2385501B91(::System::Int32 a1, ::Class_3_F33F9DC5F4112336* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::System::Int32, ::Class_3_F33F9DC5F4112336*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_7244DA2385501B91_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_F7BE6D9C58925E54(::MoleMole::Battle::Entity* a1, ::System::Int32 a2, ::Class_1_FE9ECF98C0BD94FC* a3, ::Enum_3_0A3761FE34514D6C_28 a4, ::System::Collections::Generic::List_1<::System::Int32>* a5)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Int32, ::Class_1_FE9ECF98C0BD94FC*, ::Enum_3_0A3761FE34514D6C_28, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_F7BE6D9C58925E54_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_5290C94396B890B8(::Class_3_621E396E538604DB* a1)
	{
		return ((::System::Void(*)(::Class_3_621E396E538604DB*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_5290C94396B890B8_OFFSET))(a1);
	}

	static ::System::Void Method_3_278A5A0F66F14F0F(::System::Int32 a1, ::Class_1_7F72DB9FB37DF3E5* a2, ::Class_3_22FDC730CC26B7BA_Struct_2_18D6C498A4DB832E& a3)
	{
		return ((::System::Void(*)(::System::Int32, ::Class_1_7F72DB9FB37DF3E5*, ::Class_3_22FDC730CC26B7BA_Struct_2_18D6C498A4DB832E&))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_278A5A0F66F14F0F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_0EEBC5B02662527C(::Class_3_621E396E538604DB* a1, ::Class_3_F35B080B137ECC46* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::Class_3_621E396E538604DB*, ::Class_3_F35B080B137ECC46*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_0EEBC5B02662527C_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_A8518C4D4078676C(::Class_3_621E396E538604DB* a1)
	{
		return ((::System::Void(*)(::Class_3_621E396E538604DB*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_A8518C4D4078676C_OFFSET))(a1);
	}

	static ::System::Void Method_3_956900A3AE2A9232(::System::Int32 a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_956900A3AE2A9232_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_90889A6A6929E4BE(::Class_3_621E396E538604DB* a1)
	{
		return ((::System::Void(*)(::Class_3_621E396E538604DB*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_90889A6A6929E4BE_OFFSET))(a1);
	}

	static ::System::Void Method_3_39EDE1FC10F145B1(::System::Int32 a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_39EDE1FC10F145B1_OFFSET))(a1, a2);
	}

	static ::System::Single Method_3_309BD08D1A4B5C7E(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Single(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_309BD08D1A4B5C7E_OFFSET))(a1);
	}

	static ::System::Void Method_3_60A88E197FF28F6F(::Class_3_621E396E538604DB* a1)
	{
		return ((::System::Void(*)(::Class_3_621E396E538604DB*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_60A88E197FF28F6F_OFFSET))(a1);
	}

	static ::System::Void Method_3_64FEF20B99B6ADC1(::Class_3_621E396E538604DB* a1, ::MoleMole::Battle::Entity* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Class_3_621E396E538604DB*, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_64FEF20B99B6ADC1_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_70FC9388532E1C86(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_70FC9388532E1C86_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_B1036099F932819B(::System::Int32 a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Boolean(*)(::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_B1036099F932819B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_ACDC0CFA11A652D0(::System::Int32 a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_ACDC0CFA11A652D0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_0792C269E4075B81(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_0792C269E4075B81_OFFSET))(a1);
	}

	static ::System::Void Method_3_14E9BE7825EB14E3(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_14E9BE7825EB14E3_OFFSET))(a1);
	}
};
