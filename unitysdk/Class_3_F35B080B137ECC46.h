#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_90_Enum_3_AC46235E222DC7EE.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Enum_3_1F6F50F7EA3A718F.h"
#include "unitysdk/Enum_3_470312FC6BAE7111.h"
#include "unitysdk/Enum_3_4F1F8ABDC2B55312.h"
#include "unitysdk/Enum_3_CDC95A71D07E3BF9.h"
#include "unitysdk/Enum_3_DEC90C97E871B705.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/Struct_2_0275CAFB06626B8D.h"
#include "unitysdk/Struct_2_49C1630534D9538D.h"
#include "unitysdk/Struct_2_9F85650CFFBE9F44.h"
#include "unitysdk/Struct_2_F2A7939F5DFF18C1_3.h"
#include "unitysdk/Struct_2_F2A7939F5DFF18C1_5.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/PhysicMaterialCombine.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/RigidbodyConstraints.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_06076BF6FF6AD16D;
class Class_1_CB7F0487F7A6164A;
class Class_1_D69A5F7574A01DAB;
class Class_2_0206DD479BB5C906;
class Class_2_EA1C4A1A308E269F;
class NPCStreamingProxy;
namespace MoleMole { class DynamicBoneGroup; }
namespace MoleMole { class MDBClothToRenderersMapping; }
namespace MoleMole { class MonoEntityColliderManager; }
namespace MoleMole { class MonoEntityModelModifier; }
namespace MoleMole { class MonoGhostEffect; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class MdbComponent; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class SkinnedMeshRenderer; }
namespace UnityEngine { class Transform; }

#define CLASS_3_F35B080B137ECC46_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x84C91C0)
#define CLASS_3_F35B080B137ECC46_METHOD_3_06954E47E3B4071B_OFFSET UNITYSDK_OFFSET(0x84CCC00)
#define CLASS_3_F35B080B137ECC46_METHOD_3_0C751C8A589949D9_OFFSET UNITYSDK_OFFSET(0x84C9A70)
#define CLASS_3_F35B080B137ECC46_METHOD_3_10FFF5D129383396_OFFSET UNITYSDK_OFFSET(0x84CCC10)
#define CLASS_3_F35B080B137ECC46_METHOD_3_13F9C1BE33BE16F1_OFFSET UNITYSDK_OFFSET(0x84C9710)
#define CLASS_3_F35B080B137ECC46_METHOD_3_1DF1FA98B6A6B5EE_OFFSET UNITYSDK_OFFSET(0x84CB700)
#define CLASS_3_F35B080B137ECC46_METHOD_3_208CCBFF1B8F62A7_OFFSET UNITYSDK_OFFSET(0x84CB3F0)
#define CLASS_3_F35B080B137ECC46_METHOD_3_2C1F0A815CE2FE02_OFFSET UNITYSDK_OFFSET(0x84CC760)
#define CLASS_3_F35B080B137ECC46_METHOD_3_2F7599502F380F7B_OFFSET UNITYSDK_OFFSET(0x84CA080)
#define CLASS_3_F35B080B137ECC46_METHOD_3_35145442102AACA9_OFFSET UNITYSDK_OFFSET(0x84CC750)
#define CLASS_3_F35B080B137ECC46_METHOD_3_3A1BC9FEAE4C080B_OFFSET UNITYSDK_OFFSET(0x84C9B30)
#define CLASS_3_F35B080B137ECC46_METHOD_3_3CAC93BF77250DAD_1_OFFSET UNITYSDK_OFFSET(0x84CC860)
#define CLASS_3_F35B080B137ECC46_METHOD_3_3CAC93BF77250DAD_OFFSET UNITYSDK_OFFSET(0x84CC850)
#define CLASS_3_F35B080B137ECC46_METHOD_3_413F493333BF3391_OFFSET UNITYSDK_OFFSET(0x84CC1F0)
#define CLASS_3_F35B080B137ECC46_METHOD_3_488A9656C33E5F20_OFFSET UNITYSDK_OFFSET(0x84CC200)
#define CLASS_3_F35B080B137ECC46_METHOD_3_4B74C77F562980F8_OFFSET UNITYSDK_OFFSET(0x84CC970)
#define CLASS_3_F35B080B137ECC46_METHOD_3_4E8DF6F8A37B229A_1_OFFSET UNITYSDK_OFFSET(0x84CC870)
#define CLASS_3_F35B080B137ECC46_METHOD_3_4E8DF6F8A37B229A_OFFSET UNITYSDK_OFFSET(0x84CB9D0)
#define CLASS_3_F35B080B137ECC46_METHOD_3_4F4018519B20BBDD_1_OFFSET UNITYSDK_OFFSET(0x84CBE80)
#define CLASS_3_F35B080B137ECC46_METHOD_3_4F4018519B20BBDD_2_OFFSET UNITYSDK_OFFSET(0x84A7EC0)
#define CLASS_3_F35B080B137ECC46_METHOD_3_4F4018519B20BBDD_3_OFFSET UNITYSDK_OFFSET(0x84AD120)
#define CLASS_3_F35B080B137ECC46_METHOD_3_4F4018519B20BBDD_4_OFFSET UNITYSDK_OFFSET(0x84B4630)
#define CLASS_3_F35B080B137ECC46_METHOD_3_4F4018519B20BBDD_OFFSET UNITYSDK_OFFSET(0x84B4360)
#define CLASS_3_F35B080B137ECC46_METHOD_3_50B337A40A0C6E04_OFFSET UNITYSDK_OFFSET(0x84C9CE0)
#define CLASS_3_F35B080B137ECC46_METHOD_3_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x84CC740)
#define CLASS_3_F35B080B137ECC46_METHOD_3_53D01BC7BE0C0CAC_OFFSET UNITYSDK_OFFSET(0x84CA750)
#define CLASS_3_F35B080B137ECC46_METHOD_3_5A064B932CABD4C7_OFFSET UNITYSDK_OFFSET(0x84CC010)
#define CLASS_3_F35B080B137ECC46_METHOD_3_5B0743536553688C_OFFSET UNITYSDK_OFFSET(0x84C9C50)
#define CLASS_3_F35B080B137ECC46_METHOD_3_5E38FB42EB536FCC_OFFSET UNITYSDK_OFFSET(0x84C99E0)
#define CLASS_3_F35B080B137ECC46_METHOD_3_63106102B3972D90_OFFSET UNITYSDK_OFFSET(0x84CC980)
#define CLASS_3_F35B080B137ECC46_METHOD_3_70589F89E4D22649_OFFSET UNITYSDK_OFFSET(0x84B6C40)
#define CLASS_3_F35B080B137ECC46_METHOD_3_73052712910A9EE7_OFFSET UNITYSDK_OFFSET(0x84C9020)
#define CLASS_3_F35B080B137ECC46_METHOD_3_7756ACA055CA21F1_OFFSET UNITYSDK_OFFSET(0x84C7EE0)
#define CLASS_3_F35B080B137ECC46_METHOD_3_7B3619A7BEBE4728_OFFSET UNITYSDK_OFFSET(0x84CB9F0)
#define CLASS_3_F35B080B137ECC46_METHOD_3_7DFB4B9C80198D98_1_OFFSET UNITYSDK_OFFSET(0x84C9C60)
#define CLASS_3_F35B080B137ECC46_METHOD_3_7DFB4B9C80198D98_OFFSET UNITYSDK_OFFSET(0x84C9AE0)
#define CLASS_3_F35B080B137ECC46_METHOD_3_87411ABA28C869BA_OFFSET UNITYSDK_OFFSET(0x84CCB60)
#define CLASS_3_F35B080B137ECC46_METHOD_3_8ED0B5D9B2E0D6ED_OFFSET UNITYSDK_OFFSET(0x84CBFF0)
#define CLASS_3_F35B080B137ECC46_METHOD_3_8F9716FCC554E5F2_1_OFFSET UNITYSDK_OFFSET(0x84CC720)
#define CLASS_3_F35B080B137ECC46_METHOD_3_8F9716FCC554E5F2_OFFSET UNITYSDK_OFFSET(0x84CB250)
#define CLASS_3_F35B080B137ECC46_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x84C9A80)
#define CLASS_3_F35B080B137ECC46_METHOD_3_A8544B81F391A43A_OFFSET UNITYSDK_OFFSET(0x84CA460)
#define CLASS_3_F35B080B137ECC46_METHOD_3_A8F6F688241E6DBC_OFFSET UNITYSDK_OFFSET(0x84CB880)
#define CLASS_3_F35B080B137ECC46_METHOD_3_B27806B1CCE71FC1_OFFSET UNITYSDK_OFFSET(0x84BA370)
#define CLASS_3_F35B080B137ECC46_METHOD_3_B4CDB1B15D31FE08_OFFSET UNITYSDK_OFFSET(0x84CC730)
#define CLASS_3_F35B080B137ECC46_METHOD_3_B56331B6651EDFA5_OFFSET UNITYSDK_OFFSET(0x84CAEF0)
#define CLASS_3_F35B080B137ECC46_METHOD_3_BA4994657338A2BB_OFFSET UNITYSDK_OFFSET(0x84CC290)
#define CLASS_3_F35B080B137ECC46_METHOD_3_BFB8A9EC107A5B24_OFFSET UNITYSDK_OFFSET(0x84C9B20)
#define CLASS_3_F35B080B137ECC46_METHOD_3_C09A902625D2FD94_OFFSET UNITYSDK_OFFSET(0x84C9A60)
#define CLASS_3_F35B080B137ECC46_METHOD_3_C2245EC58D417830_OFFSET UNITYSDK_OFFSET(0x84CC0C0)
#define CLASS_3_F35B080B137ECC46_METHOD_3_C39280491CA2E75F_OFFSET UNITYSDK_OFFSET(0x84B6300)
#define CLASS_3_F35B080B137ECC46_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x84CA920)
#define CLASS_3_F35B080B137ECC46_METHOD_3_D37FAD0A6AA04B25_1_OFFSET UNITYSDK_OFFSET(0x84CCBE0)
#define CLASS_3_F35B080B137ECC46_METHOD_3_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x84C96F0)
#define CLASS_3_F35B080B137ECC46_METHOD_3_D92CD016FBDE5B70_OFFSET UNITYSDK_OFFSET(0x84CC960)
#define CLASS_3_F35B080B137ECC46_METHOD_3_DC1F24E9C2189912_OFFSET UNITYSDK_OFFSET(0x84CA9C0)
#define CLASS_3_F35B080B137ECC46_METHOD_3_DD1EE3A48E307831_OFFSET UNITYSDK_OFFSET(0x84CB5D0)
#define CLASS_3_F35B080B137ECC46_METHOD_3_DEE3EF9E11427E82_OFFSET UNITYSDK_OFFSET(0x84C9CD0)
#define CLASS_3_F35B080B137ECC46_METHOD_3_E11BB58CDF5EE653_OFFSET UNITYSDK_OFFSET(0x84C9830)
#define CLASS_3_F35B080B137ECC46_METHOD_3_E57D53E301984526_OFFSET UNITYSDK_OFFSET(0x84CB430)
#define CLASS_3_F35B080B137ECC46_METHOD_3_E63137AC0C60FCB8_OFFSET UNITYSDK_OFFSET(0x84CC890)
#define CLASS_3_F35B080B137ECC46_METHOD_3_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x84CC000)
#define CLASS_3_F35B080B137ECC46_METHOD_3_F1BB718E73080948_OFFSET UNITYSDK_OFFSET(0x84CB260)
#define CLASS_3_F35B080B137ECC46_METHOD_3_F6E5904063C30B4E_OFFSET UNITYSDK_OFFSET(0x84CAC90)
#define CLASS_3_F35B080B137ECC46_METHOD_3_FA662896843C137A_OFFSET UNITYSDK_OFFSET(0x84CC8A0)
#define CLASS_3_F35B080B137ECC46_METHOD_3_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0x84CBDC0)
#define CLASS_3_F35B080B137ECC46_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x84C6140)
#define CLASS_3_F35B080B137ECC46__CCTOR_OFFSET UNITYSDK_OFFSET(0x84C9220)
#define CLASS_3_F35B080B137ECC46__CTOR_OFFSET UNITYSDK_OFFSET(0x84C92A0)

inline static constexpr unsigned int Class_3_F35B080B137ECC46_TypeDefinitionIndex = 77736;

class Class_3_F35B080B137ECC46 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::String* Field_3_41; // 0x0
	// static const ::System::String* Field_3_66; // 0x0
	// static const ::System::Int32 Field_3_95 = 0x1D; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* Field_3_24; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_3_9; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>* Field_3_22; // 0x58
	::System::Collections::Generic::List_1<::MoleMole::DynamicBoneGroup*>* Field_3_67; // 0x60
	::Class_2_EA1C4A1A308E269F* Field_3_79; // 0x68
	::UnityEngine::MdbComponent* Field_3_82; // 0x70
	::UnityEngine::Collider* Field_3_7; // 0x78
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Struct_2_0275CAFB06626B8D>*>* Field_3_87; // 0x80
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Collider*, ::Struct_2_49C1630534D9538D>* Field_3_60; // 0x88
	::UnityEngine::Transform* Field_3_4; // 0x90
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_2_0206DD479BB5C906*>* Field_3_26; // 0x98
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_3_10; // 0xA0
	::Il2CppArray<::UnityEngine::Light*>* Field_3_20; // 0xA8
	::MoleMole::MonoEntityColliderManager* Field_3_94; // 0xB0
	::MoleMole::MonoGhostEffect* Field_3_59; // 0xB8
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Renderer*>* Field_3_19; // 0xC0
	::MoleMole::MDBClothToRenderersMapping* Field_3_85; // 0xC8
	::UnityEngine::Collider* Field_3_6; // 0xD0
	::Class_2_0206DD479BB5C906* Field_3_90; // 0xD8
	::NPCStreamingProxy* Field_3_5; // 0xE0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>* Field_3_21; // 0xE8
	::UnityEngine::GameObject* Field_3_3; // 0xF0
	::System::Collections::Generic::Dictionary_2<::Enum_3_DEC90C97E871B705, ::Class_1_06076BF6FF6AD16D*>* Field_3_8; // 0xF8
	::Il2CppArray<::UnityEngine::Collider*>* Field_3_16; // 0x100
	::System::Collections::Generic::Dictionary_2<::UnityEngine::SkinnedMeshRenderer*, ::System::Boolean>* Field_3_88; // 0x108
	::Foundation::AssetPath Field_3_0; // 0x110
	::System::Collections::Generic::Dictionary_2<::MoleMole::GameplayTag, ::Class_1_CB7F0487F7A6164A*>* Field_3_69; // 0x120
	::UnityEngine::Transform* Field_3_76; // 0x128
	::System::Action_2<::System::Boolean, ::MoleMole::Battle::Entity*>* Field_3_75; // 0x130
	::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* Field_3_14; // 0x138
	::System::String* Field_3_57; // 0x140
	::Class_1_CB7F0487F7A6164A* Field_3_68; // 0x148
	::UnityEngine::Transform* Field_3_42; // 0x150
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>* Field_3_23; // 0x158
	::Il2CppArray<::UnityEngine::Renderer*>* Field_3_17; // 0x160
	::System::Collections::Generic::List_1<::Struct_2_F2A7939F5DFF18C1_3>* Field_3_84; // 0x168
	::MoleMole::MonoEntityModelModifier* Field_3_58; // 0x170
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* Field_3_86; // 0x178
	::System::Collections::Generic::Dictionary_2<::UnityEngine::SkinnedMeshRenderer*, ::System::Collections::Generic::List_1<::Struct_2_F2A7939F5DFF18C1_5>*>* Field_3_89; // 0x180
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Quaternion>>* Field_3_25; // 0x188
	::System::Collections::Generic::List_1<::UnityEngine::Collider*>* Field_3_15; // 0x190
	::Foundation::AssetPath Field_3_1; // 0x198
	::System::Collections::Generic::List_1<::Foundation::AssetPath>* Field_3_2; // 0x1A8
	::System::Action_1<::System::Boolean>* Field_3_73; // 0x1B0
	::System::Action_2<::System::Boolean, ::MoleMole::Battle::Entity*>* Field_3_74; // 0x1B8
	::System::Boolean Field_3_93; // 0x1C0
	::System::Boolean Field_3_63; // 0x1C1
	::System::Boolean Field_3_44; // 0x1C2
	::System::Boolean Field_3_83; // 0x1C3
	::System::Single Field_3_53; // 0x1C4
	::System::Single Field_3_35; // 0x1C8
	::System::Boolean Field_3_70; // 0x1CC
	::System::Boolean Field_3_77; // 0x1CD
	::System::Boolean Field_3_91; // 0x1CE
	::System::Boolean Field_3_78; // 0x1CF
	::System::Int32 Field_3_64; // 0x1D0
	::Enum_3_1F6F50F7EA3A718F Field_3_65; // 0x1D4
	::System::Boolean Field_3_39; // 0x1D8
	::System::Boolean Field_3_92; // 0x1D9
	::System::Boolean Field_3_38; // 0x1DA
	::System::Boolean Field_3_18; // 0x1DB
	::System::Single Field_3_29; // 0x1DC
	::System::Boolean Field_3_62; // 0x1E0
	::System::Boolean Field_3_48; // 0x1E1
	::Enum_3_CDC95A71D07E3BF9 Field_3_61; // 0x1E4
	::UnityEngine::Quaternion Field_3_34; // 0x1E8
	::System::Boolean Field_3_51; // 0x1F8
	::System::Boolean Field_3_46; // 0x1F9
	::System::Boolean Field_3_45; // 0x1FA
	::System::Boolean Field_3_71; // 0x1FB
	::UnityEngine::Vector3 Field_3_33; // 0x1FC
	::System::Int32 Field_3_40; // 0x208
	::System::Boolean Field_3_37; // 0x20C
	::System::Boolean Field_3_47; // 0x20D
	::System::Boolean Field_3_80; // 0x20E
	::System::Boolean Field_3_56; // 0x20F
	::System::Single Field_3_50; // 0x210
	::UnityEngine::Vector3 Field_3_31; // 0x214
	::UnityEngine::Vector3 Field_3_81; // 0x220
	::UnityEngine::Vector3 Field_3_30; // 0x22C
	::System::Single Field_3_55; // 0x238
	::UnityEngine::PhysicMaterialCombine Field_3_11; // 0x23C
	::UnityEngine::Vector3 Field_3_36; // 0x240
	::Class_1_43BD383C98B4C0C5_90_Enum_3_AC46235E222DC7EE Field_3_72; // 0x24C
	::Enum_3_470312FC6BAE7111 Field_3_49; // 0x250
	::System::Single Field_3_28; // 0x254
	::System::Single Field_3_12; // 0x258
	::System::Single Field_3_27; // 0x25C
	::System::Single Field_3_13; // 0x260
	::UnityEngine::RigidbodyConstraints Field_3_43; // 0x264
	::UnityEngine::Vector3 Field_3_32; // 0x268
	::System::Single Field_3_54; // 0x274
	::System::Int32 Field_3_52; // 0x278

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_F35B080B137ECC46__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F35B080B137ECC46__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F35B080B137ECC46_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F35B080B137ECC46_GETCLASSID_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_3_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F35B080B137ECC46_METHOD_3_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_3_4F4018519B20BBDD()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F35B080B137ECC46_METHOD_3_4F4018519B20BBDD_OFFSET))(this);
	}

	static ::System::Boolean Method_3_13F9C1BE33BE16F1(::UnityEngine::GameObject* a1, ::Struct_2_9F85650CFFBE9F44& a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::GameObject*, ::Struct_2_9F85650CFFBE9F44&))((::PBYTE)hIl2Cpp + CLASS_3_F35B080B137ECC46_METHOD_3_13F9C1BE33BE16F1_OFFSET))(a1, a2);
	}

	::UnityEngine::Transform* Method_3_E11BB58CDF5EE653()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F35B080B137ECC46_METHOD_3_E11BB58CDF5EE653_OFFSET))(this);
	}

	::System::Void Method_3_5E38FB42EB536FCC(::System::Boolean a1, ::Class_1_43BD383C98B4C0C5_90_Enum_3_AC46235E222DC7EE a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_1_43BD383C98B4C0C5_90_Enum_3_AC46235E222DC7EE))((::PBYTE)hIl2Cpp + CLASS_3_F35B080B137ECC46_METHOD_3_5E38FB42EB536FCC_OFFSET))(this, a1, a2);
	}

	::Il2CppArray<::UnityEngine::Light*>* Method_3_C09A902625D2FD94()
	{
		return ((::Il2CppArray<::UnityEngine::Light*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F35B080B137ECC46_METHOD_3_C09A902625D2FD94_OFFSET))(this);
	}

	::System::Boolean Method_3_70589F89E4D22649()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F35B080B137ECC46_METHOD_3_70589F89E4D22649_OFFSET))(this);
	}

	::Il2CppArray<::UnityEngine::Collider*>* Method_3_0C751C8A589949D9()
	{
		return ((::Il2CppArray<::UnityEngine::Collider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F35B080B137ECC46_METHOD_3_0C751C8A589949D9_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F35B080B137ECC46_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_3_7DFB4B9C80198D98()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F35B080B137ECC46_METHOD_3_7DFB4B9C80198D98_OFFSET))(this);
	}

	::System::Void Method_3_BFB8A9EC107A5B24(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_3_F35B080B137ECC46_METHOD_3_BFB8A9EC107A5B24_OFFSET))(this, a1);
	}

	::System::Void Method_3_3A1BC9FEAE4C080B(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_F35B080B137ECC46_METHOD_3_3A1BC9FEAE4C080B_OFFSET))(this, a1);
	}

	::Foundation::AssetPath Method_3_5B0743536553688C()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F35B080B137ECC46_METHOD_3_5B0743536553688C_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_3_7DFB4B9C80198D98_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F35B080B137ECC46_METHOD_3_7DFB4B9C80198D98_1_OFFSET))(this);
	}

	::System::Void Method_3_DEE3EF9E11427E82(::MoleMole::MonoEntityColliderManager* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEntityColliderManager*))((::PBYTE)hIl2Cpp + CLASS_3_F35B080B137ECC46_METHOD_3_DEE3EF9E11427E82_OFFSET))(this, a1);
	}

	::System::Void Method_3_50B337A40A0C6E04(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::String* a3, ::System::Single a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Boolean a7, ::MoleMole::MonoEntityModelModifier* a8, ::System::Collections::Generic::List_1<::System::String*>* a9)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::String*, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::MoleMole::MonoEntityModelModifier*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_3_F35B080B137ECC46_METHOD_3_50B337A40A0C6E04_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void Method_3_A8544B81F391A43A(::System::Collections::Generic::List_1<::Class_1_CB7F0487F7A6164A*>*& a1, ::System::Boolean a2, ::System::Func_2<::Class_1_CB7F0487F7A6164A*, ::System::Boolean>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_CB7F0487F7A6164A*>*&, ::System::Boolean, ::System::Func_2<::Class_1_CB7F0487F7A6164A*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_3_F35B080B137ECC46_METHOD_3_A8544B81F391A43A_OFFSET))(this, a1, a2, a3);
	}

	static ::Class_3_F35B080B137ECC46* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_F35B080B137ECC46*(*)())((::PBYTE)hIl2Cpp + CLASS_3_F35B080B137ECC46_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	static ::Struct_2_9F85650CFFBE9F44 Method_3_DC1F24E9C2189912(::Class_3_F35B080B137ECC46* a1)
	{
		return ((::Struct_2_9F85650CFFBE9F44(*)(::Class_3_F35B080B137ECC46*))((::PBYTE)hIl2Cpp + CLASS_3_F35B080B137ECC46_METHOD_3_DC1F24E9C2189912_OFFSET))(a1);
	}

	::System::Void Method_3_8F9716FCC554E5F2(::UnityEngine::Collider* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_3_F35B080B137ECC46_METHOD_3_8F9716FCC554E5F2_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F1BB718E73080948()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F35B080B137ECC46_METHOD_3_F1BB718E73080948_OFFSET))(this);
	}

	::System::Void Method_3_2F7599502F380F7B(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::Foundation::AssetPath a3, ::System::Single a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Boolean a7, ::MoleMole::MonoEntityModelModifier* a8, ::System::Collections::Generic::List_1<::Foundation::AssetPath>* a9)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Foundation::AssetPath, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::MoleMole::MonoEntityModelModifier*, ::System::Collections::Generic::List_1<::Foundation::AssetPath>*))((::PBYTE)hIl2Cpp + CLASS_3_F35B080B137ECC46_METHOD_3_2F7599502F380F7B_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Single Method_3_208CCBFF1B8F62A7()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F35B080B137ECC46_METHOD_3_208CCBFF1B8F62A7_OFFSET))(this);
	}

	::System::Boolean Method_3_E57D53E301984526(::MoleMole::GameplayTag a1, ::Class_1_CB7F0487F7A6164A*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::GameplayTag, ::Class_1_CB7F0487F7A6164A*&))((::PBYTE)hIl2Cpp + CLASS_3_F35B080B137ECC46_METHOD_3_E57D53E301984526_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_DD1EE3A48E307831()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F35B080B137ECC46_METHOD_3_DD1EE3A48E307831_OFFSET))(this);
	}

	::System::Void Method_3_1DF1FA98B6A6B5EE(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_F35B080B137ECC46_METHOD_3_1DF1FA98B6A6B5EE_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_A8F6F688241E6DBC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F35B080B137ECC46_METHOD_3_A8F6F688241E6DBC_OFFSET))(this);
	}

	::System::Void Method_3_4E8DF6F8A37B229A(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_F35B080B137ECC46_METHOD_3_4E8DF6F8A37B229A_OFFSET))(this, a1);
	}

	::System::Void Method_3_7B3619A7BEBE4728(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_F35B080B137ECC46_METHOD_3_7B3619A7BEBE4728_OFFSET))(this, a1);
	}

	::System::Void Method_3_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_F35B080B137ECC46_METHOD_3_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_3_4F4018519B20BBDD_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F35B080B137ECC46_METHOD_3_4F4018519B20BBDD_1_OFFSET))(this);
	}

	::System::Void Method_3_8ED0B5D9B2E0D6ED(::Il2CppArray<::UnityEngine::Light*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Light*>*))((::PBYTE)hIl2Cpp + CLASS_3_F35B080B137ECC46_METHOD_3_8ED0B5D9B2E0D6ED_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_3_F6E5904063C30B4E(::UnityEngine::GameObject* a1, ::Struct_2_9F85650CFFBE9F44& a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::GameObject*, ::Struct_2_9F85650CFFBE9F44&))((::PBYTE)hIl2Cpp + CLASS_3_F35B080B137ECC46_METHOD_3_F6E5904063C30B4E_OFFSET))(a1, a2);
	}

	::UnityEngine::Vector3 Method_3_4F4018519B20BBDD_2()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F35B080B137ECC46_METHOD_3_4F4018519B20BBDD_2_OFFSET))(this);
	}

	::System::Void Method_3_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_F35B080B137ECC46_METHOD_3_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::System::Void Method_3_5A064B932CABD4C7(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_F35B080B137ECC46_METHOD_3_5A064B932CABD4C7_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_3_C2245EC58D417830()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F35B080B137ECC46_METHOD_3_C2245EC58D417830_OFFSET))(this);
	}

	::Class_1_CB7F0487F7A6164A* Method_3_53D01BC7BE0C0CAC()
	{
		return ((::Class_1_CB7F0487F7A6164A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F35B080B137ECC46_METHOD_3_53D01BC7BE0C0CAC_OFFSET))(this);
	}

	::UnityEngine::Quaternion Method_3_413F493333BF3391()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F35B080B137ECC46_METHOD_3_413F493333BF3391_OFFSET))(this);
	}

	::System::Void Method_3_73052712910A9EE7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F35B080B137ECC46_METHOD_3_73052712910A9EE7_OFFSET))(this);
	}

	::System::Void Method_3_7756ACA055CA21F1(::System::Collections::Generic::Dictionary_2<::Enum_3_4F1F8ABDC2B55312, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_D69A5F7574A01DAB*>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::Enum_3_4F1F8ABDC2B55312, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_D69A5F7574A01DAB*>*>*))((::PBYTE)hIl2Cpp + CLASS_3_F35B080B137ECC46_METHOD_3_7756ACA055CA21F1_OFFSET))(this, a1);
	}

	::Il2CppArray<::UnityEngine::Renderer*>* Method_3_488A9656C33E5F20()
	{
		return ((::Il2CppArray<::UnityEngine::Renderer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F35B080B137ECC46_METHOD_3_488A9656C33E5F20_OFFSET))(this);
	}

	::System::Void Method_3_8F9716FCC554E5F2_1(::UnityEngine::Collider* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_3_F35B080B137ECC46_METHOD_3_8F9716FCC554E5F2_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_B4CDB1B15D31FE08(::Il2CppArray<::UnityEngine::Collider*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Collider*>*))((::PBYTE)hIl2Cpp + CLASS_3_F35B080B137ECC46_METHOD_3_B4CDB1B15D31FE08_OFFSET))(this, a1);
	}

	::System::Single Method_3_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F35B080B137ECC46_METHOD_3_5323F2DF46A044DA_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_3_4F4018519B20BBDD_3()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F35B080B137ECC46_METHOD_3_4F4018519B20BBDD_3_OFFSET))(this);
	}

	::MoleMole::MonoEntityColliderManager* Method_3_35145442102AACA9()
	{
		return ((::MoleMole::MonoEntityColliderManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F35B080B137ECC46_METHOD_3_35145442102AACA9_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_3_4F4018519B20BBDD_4()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F35B080B137ECC46_METHOD_3_4F4018519B20BBDD_4_OFFSET))(this);
	}

	::System::Boolean Method_3_2C1F0A815CE2FE02()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F35B080B137ECC46_METHOD_3_2C1F0A815CE2FE02_OFFSET))(this);
	}

	::UnityEngine::Collider* Method_3_3CAC93BF77250DAD()
	{
		return ((::UnityEngine::Collider*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F35B080B137ECC46_METHOD_3_3CAC93BF77250DAD_OFFSET))(this);
	}

	::UnityEngine::Collider* Method_3_3CAC93BF77250DAD_1()
	{
		return ((::UnityEngine::Collider*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F35B080B137ECC46_METHOD_3_3CAC93BF77250DAD_1_OFFSET))(this);
	}

	::System::Void Method_3_4E8DF6F8A37B229A_1(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_F35B080B137ECC46_METHOD_3_4E8DF6F8A37B229A_1_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Foundation::AssetPath>* Method_3_E63137AC0C60FCB8()
	{
		return ((::System::Collections::Generic::List_1<::Foundation::AssetPath>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F35B080B137ECC46_METHOD_3_E63137AC0C60FCB8_OFFSET))(this);
	}

	static ::System::Boolean Method_3_B56331B6651EDFA5(::UnityEngine::GameObject* a1, ::Struct_2_9F85650CFFBE9F44& a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::GameObject*, ::Struct_2_9F85650CFFBE9F44&))((::PBYTE)hIl2Cpp + CLASS_3_F35B080B137ECC46_METHOD_3_B56331B6651EDFA5_OFFSET))(a1, a2);
	}

	::System::Void Method_3_C39280491CA2E75F(::UnityEngine::Quaternion a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_3_F35B080B137ECC46_METHOD_3_C39280491CA2E75F_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_3_FA662896843C137A()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F35B080B137ECC46_METHOD_3_FA662896843C137A_OFFSET))(this);
	}

	::MoleMole::MonoEntityModelModifier* Method_3_D92CD016FBDE5B70()
	{
		return ((::MoleMole::MonoEntityModelModifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F35B080B137ECC46_METHOD_3_D92CD016FBDE5B70_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>* Method_3_4B74C77F562980F8()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F35B080B137ECC46_METHOD_3_4B74C77F562980F8_OFFSET))(this);
	}

	::System::Void Method_3_63106102B3972D90(::Class_1_CB7F0487F7A6164A* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CB7F0487F7A6164A*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_F35B080B137ECC46_METHOD_3_63106102B3972D90_OFFSET))(this, a1, a2);
	}

	::Struct_2_9F85650CFFBE9F44 Method_3_87411ABA28C869BA()
	{
		return ((::Struct_2_9F85650CFFBE9F44(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F35B080B137ECC46_METHOD_3_87411ABA28C869BA_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_3_D37FAD0A6AA04B25_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F35B080B137ECC46_METHOD_3_D37FAD0A6AA04B25_1_OFFSET))(this);
	}

	::System::Void Method_3_06954E47E3B4071B(::MoleMole::MonoEntityModelModifier* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEntityModelModifier*))((::PBYTE)hIl2Cpp + CLASS_3_F35B080B137ECC46_METHOD_3_06954E47E3B4071B_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_BA4994657338A2BB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F35B080B137ECC46_METHOD_3_BA4994657338A2BB_OFFSET))(this);
	}

	::System::Void Method_3_10FFF5D129383396(::UnityEngine::Quaternion a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_3_F35B080B137ECC46_METHOD_3_10FFF5D129383396_OFFSET))(this, a1);
	}

	::UnityEngine::Quaternion Method_3_B27806B1CCE71FC1()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F35B080B137ECC46_METHOD_3_B27806B1CCE71FC1_OFFSET))(this);
	}
};
