#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_494697B4AB731572_Enum_3_7027F8F289F82CE3.h"
#include "unitysdk/Class_2_125A8668F94B4EAE_Struct_2_B1088F951BCB4BAD.h"
#include "unitysdk/Enum_3_8033C6652F9AC672.h"
#include "unitysdk/Enum_3_91322E66F4CC7ECA.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/MoleMole/CharacterCameraDitheringData.h"
#include "unitysdk/MoleMole/Config/CameraDitherLayerData.h"
#include "unitysdk/Struct_2_105AD8F97CF5121C.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_135;
class Class_1_11A6C6850BA04D5F;
namespace MoleMole { class MonoRenderHandler; }
namespace MoleMole { class MonoSkipDitherCollider; }
namespace MoleMole::Battle { class Entity; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define CLASS_2_125A8668F94B4EAE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x70792C0)
#define CLASS_2_125A8668F94B4EAE_METHOD_2_0B95AB08ADAE3CF8_OFFSET UNITYSDK_OFFSET(0x707ED00)
#define CLASS_2_125A8668F94B4EAE_METHOD_2_10DA236D7F5B18F9_OFFSET UNITYSDK_OFFSET(0x7080E10)
#define CLASS_2_125A8668F94B4EAE_METHOD_2_243B47BFD2EED9E6_OFFSET UNITYSDK_OFFSET(0x7079FA0)
#define CLASS_2_125A8668F94B4EAE_METHOD_2_25BA604622A77AF9_OFFSET UNITYSDK_OFFSET(0x70816B0)
#define CLASS_2_125A8668F94B4EAE_METHOD_2_3478CBAFE42ED8E1_OFFSET UNITYSDK_OFFSET(0x707A610)
#define CLASS_2_125A8668F94B4EAE_METHOD_2_36E6049D537BF6AE_OFFSET UNITYSDK_OFFSET(0x707D8A0)
#define CLASS_2_125A8668F94B4EAE_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x70801C0)
#define CLASS_2_125A8668F94B4EAE_METHOD_2_3AA20A0DA6990FBE_OFFSET UNITYSDK_OFFSET(0x7079830)
#define CLASS_2_125A8668F94B4EAE_METHOD_2_3BFE3B9EF8374F61_OFFSET UNITYSDK_OFFSET(0x707F4D0)
#define CLASS_2_125A8668F94B4EAE_METHOD_2_3F1A5F0DB7432C33_OFFSET UNITYSDK_OFFSET(0x7081560)
#define CLASS_2_125A8668F94B4EAE_METHOD_2_4BDF3AD2D2C88680_OFFSET UNITYSDK_OFFSET(0x707A820)
#define CLASS_2_125A8668F94B4EAE_METHOD_2_54871F6DFC8EB119_OFFSET UNITYSDK_OFFSET(0x70808B0)
#define CLASS_2_125A8668F94B4EAE_METHOD_2_561D8F24FFF54197_OFFSET UNITYSDK_OFFSET(0x707D620)
#define CLASS_2_125A8668F94B4EAE_METHOD_2_5A449DAD1668B956_OFFSET UNITYSDK_OFFSET(0x707A230)
#define CLASS_2_125A8668F94B4EAE_METHOD_2_62167C28EC14CC63_OFFSET UNITYSDK_OFFSET(0x7081740)
#define CLASS_2_125A8668F94B4EAE_METHOD_2_622711FDBF153600_OFFSET UNITYSDK_OFFSET(0x7080150)
#define CLASS_2_125A8668F94B4EAE_METHOD_2_66625B9A7103FF67_OFFSET UNITYSDK_OFFSET(0x707D3B0)
#define CLASS_2_125A8668F94B4EAE_METHOD_2_66A038FD5DBE6F9A_1_OFFSET UNITYSDK_OFFSET(0x707DBE0)
#define CLASS_2_125A8668F94B4EAE_METHOD_2_66A038FD5DBE6F9A_OFFSET UNITYSDK_OFFSET(0x707C370)
#define CLASS_2_125A8668F94B4EAE_METHOD_2_7658214FA014B4F3_OFFSET UNITYSDK_OFFSET(0x7080BB0)
#define CLASS_2_125A8668F94B4EAE_METHOD_2_79D572573E1F9B29_OFFSET UNITYSDK_OFFSET(0x707A480)
#define CLASS_2_125A8668F94B4EAE_METHOD_2_809E2B11AB7DE14B_OFFSET UNITYSDK_OFFSET(0x707F0E0)
#define CLASS_2_125A8668F94B4EAE_METHOD_2_82E992240300FB30_OFFSET UNITYSDK_OFFSET(0x7079FB0)
#define CLASS_2_125A8668F94B4EAE_METHOD_2_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x707DF80)
#define CLASS_2_125A8668F94B4EAE_METHOD_2_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x707D3A0)
#define CLASS_2_125A8668F94B4EAE_METHOD_2_8CB9BDF340E2FC64_OFFSET UNITYSDK_OFFSET(0x7079A60)
#define CLASS_2_125A8668F94B4EAE_METHOD_2_91C49E403D4C5D47_OFFSET UNITYSDK_OFFSET(0x7081A60)
#define CLASS_2_125A8668F94B4EAE_METHOD_2_92F2FCA8316DB56D_OFFSET UNITYSDK_OFFSET(0x707F390)
#define CLASS_2_125A8668F94B4EAE_METHOD_2_93FBAE2442837DF5_OFFSET UNITYSDK_OFFSET(0x7080CC0)
#define CLASS_2_125A8668F94B4EAE_METHOD_2_94E2BE105744618C_OFFSET UNITYSDK_OFFSET(0x707D750)
#define CLASS_2_125A8668F94B4EAE_METHOD_2_9990763B5163E37F_1_OFFSET UNITYSDK_OFFSET(0x70819D0)
#define CLASS_2_125A8668F94B4EAE_METHOD_2_9990763B5163E37F_OFFSET UNITYSDK_OFFSET(0x707A3F0)
#define CLASS_2_125A8668F94B4EAE_METHOD_2_9DECD7BC1C617AF4_OFFSET UNITYSDK_OFFSET(0x70805A0)
#define CLASS_2_125A8668F94B4EAE_METHOD_2_9F218BA7C451254A_OFFSET UNITYSDK_OFFSET(0x7081630)
#define CLASS_2_125A8668F94B4EAE_METHOD_2_A090DF776A2F09CA_OFFSET UNITYSDK_OFFSET(0x707D230)
#define CLASS_2_125A8668F94B4EAE_METHOD_2_A21BBA85D4EF7B41_OFFSET UNITYSDK_OFFSET(0x707AA90)
#define CLASS_2_125A8668F94B4EAE_METHOD_2_ADAE84B98D00E7E3_OFFSET UNITYSDK_OFFSET(0x7080230)
#define CLASS_2_125A8668F94B4EAE_METHOD_2_B88BC3A1DBB2864B_OFFSET UNITYSDK_OFFSET(0x707C4C0)
#define CLASS_2_125A8668F94B4EAE_METHOD_2_B9D1068CE26BCD84_OFFSET UNITYSDK_OFFSET(0x707A8F0)
#define CLASS_2_125A8668F94B4EAE_METHOD_2_BAA2E6A42078A6BC_OFFSET UNITYSDK_OFFSET(0x707DD30)
#define CLASS_2_125A8668F94B4EAE_METHOD_2_D60D92AB14605D56_OFFSET UNITYSDK_OFFSET(0x707F2E0)
#define CLASS_2_125A8668F94B4EAE_METHOD_2_DB21D8D1515B47C6_OFFSET UNITYSDK_OFFSET(0x7080340)
#define CLASS_2_125A8668F94B4EAE_METHOD_2_EE3A4E396E0061E4_OFFSET UNITYSDK_OFFSET(0x707DF90)
#define CLASS_2_125A8668F94B4EAE_METHOD_2_EF036CC46C57C9EA_OFFSET UNITYSDK_OFFSET(0x707D540)
#define CLASS_2_125A8668F94B4EAE_METHOD_2_F405E1D779D61234_OFFSET UNITYSDK_OFFSET(0x707A090)
#define CLASS_2_125A8668F94B4EAE_METHOD_2_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0x707EB80)
#define CLASS_2_125A8668F94B4EAE_METHOD_2_FF7EA1BAA75C548A_OFFSET UNITYSDK_OFFSET(0x7079DF0)
#define CLASS_2_125A8668F94B4EAE_ONCREATE_OFFSET UNITYSDK_OFFSET(0x7078970)
#define CLASS_2_125A8668F94B4EAE__CCTOR_OFFSET UNITYSDK_OFFSET(0x7079D50)
#define CLASS_2_125A8668F94B4EAE__CTOR_OFFSET UNITYSDK_OFFSET(0x7079C50)

inline static constexpr unsigned int Class_2_125A8668F94B4EAE_TypeDefinitionIndex = 71839;

class Class_2_125A8668F94B4EAE : public ::Foundation::SingletonDisposable_1<::Class_2_125A8668F94B4EAE*>
{
public:
	static ::System::Action_2<::UnityEngine::Collider*, ::Class_1_494697B4AB731572_Enum_3_7027F8F289F82CE3>** StaticGet_Field_2_9()
	{
		return (::System::Action_2<::UnityEngine::Collider*, ::Class_1_494697B4AB731572_Enum_3_7027F8F289F82CE3>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_125A8668F94B4EAE_TypeDefinitionIndex)->GetStaticField(0x36440);
	}
	static ::System::Action_2<::UnityEngine::Collider*, ::Class_1_494697B4AB731572_Enum_3_7027F8F289F82CE3>** StaticGet_Field_2_10()
	{
		return (::System::Action_2<::UnityEngine::Collider*, ::Class_1_494697B4AB731572_Enum_3_7027F8F289F82CE3>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_125A8668F94B4EAE_TypeDefinitionIndex)->GetStaticField(0x36448);
	}
	// static const ::System::String* Field_2_18; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_2_125A8668F94B4EAE_Struct_2_B1088F951BCB4BAD>* Field_2_21; // 0x10
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Single>* Field_2_16; // 0x18
	::System::String* Field_2_7; // 0x20
	::Struct_2_105AD8F97CF5121C Field_2_0; // 0x28
	::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* Field_2_17; // 0x48
	::System::Collections::Generic::List_1<::System::Func_2<::MoleMole::Battle::Entity*, ::System::Boolean>*>* Field_2_19; // 0x50
	::System::Collections::Generic::HashSet_1<::UnityEngine::Material*>* Field_2_5; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::String*>*>* Field_2_2; // 0x60
	::System::Collections::Generic::List_1<::UnityEngine::Material*>* Field_2_6; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_11A6C6850BA04D5F*>* Field_2_13; // 0x70
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Single>* Field_2_15; // 0x78
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_14; // 0x80
	::System::Single Field_2_12; // 0x88
	::MoleMole::Config::CameraDitherLayerData Field_2_8; // 0x8C
	::System::Boolean Field_2_1; // 0x94
	::System::Int32 Field_2_3; // 0x98
	::System::Int32 Field_2_20; // 0x9C
	::System::Single Field_2_11; // 0xA0
	::System::Int32 Field_2_4; // 0xA4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_125A8668F94B4EAE__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_125A8668F94B4EAE__CCTOR_OFFSET))();
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_125A8668F94B4EAE_ONCREATE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_125A8668F94B4EAE_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_FF7EA1BAA75C548A(::UnityEngine::Collider* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_125A8668F94B4EAE_METHOD_2_FF7EA1BAA75C548A_OFFSET))(this, a1);
	}

	::Class_2_125A8668F94B4EAE_Struct_2_B1088F951BCB4BAD Method_2_243B47BFD2EED9E6(::System::Func_2<::MoleMole::Battle::Entity*, ::System::Boolean>* a1)
	{
		return ((::Class_2_125A8668F94B4EAE_Struct_2_B1088F951BCB4BAD(*)(::PVOID, ::System::Func_2<::MoleMole::Battle::Entity*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_2_125A8668F94B4EAE_METHOD_2_243B47BFD2EED9E6_OFFSET))(this, a1);
	}

	::System::Void Method_2_82E992240300FB30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_125A8668F94B4EAE_METHOD_2_82E992240300FB30_OFFSET))(this);
	}

	::System::Void Method_2_F405E1D779D61234(::Class_1_11A6C6850BA04D5F* a1, ::System::Single a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_11A6C6850BA04D5F*, ::System::Single, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_2_125A8668F94B4EAE_METHOD_2_F405E1D779D61234_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_9990763B5163E37F(::Enum_3_8033C6652F9AC672 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_8033C6652F9AC672, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_125A8668F94B4EAE_METHOD_2_9990763B5163E37F_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_79D572573E1F9B29(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_125A8668F94B4EAE_METHOD_2_79D572573E1F9B29_OFFSET))(this, a1);
	}

	::System::Void Method_2_3478CBAFE42ED8E1(::MoleMole::MonoRenderHandler* a1, ::Il2CppArray<::UnityEngine::Material*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoRenderHandler*, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + CLASS_2_125A8668F94B4EAE_METHOD_2_3478CBAFE42ED8E1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4BDF3AD2D2C88680(::Class_2_125A8668F94B4EAE_Struct_2_B1088F951BCB4BAD a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_125A8668F94B4EAE_Struct_2_B1088F951BCB4BAD))((::PBYTE)hIl2Cpp + CLASS_2_125A8668F94B4EAE_METHOD_2_4BDF3AD2D2C88680_OFFSET))(this, a1);
	}

	::System::Void Method_2_B9D1068CE26BCD84(::UnityEngine::Material* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_125A8668F94B4EAE_METHOD_2_B9D1068CE26BCD84_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A21BBA85D4EF7B41(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_125A8668F94B4EAE_METHOD_2_A21BBA85D4EF7B41_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_66A038FD5DBE6F9A(::UnityEngine::Collider* a1, ::Class_1_494697B4AB731572_Enum_3_7027F8F289F82CE3 a2)
	{
		return ((::System::Void(*)(::UnityEngine::Collider*, ::Class_1_494697B4AB731572_Enum_3_7027F8F289F82CE3))((::PBYTE)hIl2Cpp + CLASS_2_125A8668F94B4EAE_METHOD_2_66A038FD5DBE6F9A_OFFSET))(a1, a2);
	}

	::System::Void Method_2_A090DF776A2F09CA(::UnityEngine::Ray a1, ::System::Single a2, ::System::Action_2<::UnityEngine::Collider*, ::Class_1_494697B4AB731572_Enum_3_7027F8F289F82CE3>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Ray, ::System::Single, ::System::Action_2<::UnityEngine::Collider*, ::Class_1_494697B4AB731572_Enum_3_7027F8F289F82CE3>*))((::PBYTE)hIl2Cpp + CLASS_2_125A8668F94B4EAE_METHOD_2_A090DF776A2F09CA_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_125A8668F94B4EAE_METHOD_2_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_2_66625B9A7103FF67(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_125A8668F94B4EAE_METHOD_2_66625B9A7103FF67_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_EF036CC46C57C9EA(::UnityEngine::Collider* a1, ::MoleMole::MonoSkipDitherCollider*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*, ::MoleMole::MonoSkipDitherCollider*&))((::PBYTE)hIl2Cpp + CLASS_2_125A8668F94B4EAE_METHOD_2_EF036CC46C57C9EA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8CB9BDF340E2FC64()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_125A8668F94B4EAE_METHOD_2_8CB9BDF340E2FC64_OFFSET))(this);
	}

	::System::Void Method_2_3AA20A0DA6990FBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_125A8668F94B4EAE_METHOD_2_3AA20A0DA6990FBE_OFFSET))(this);
	}

	::System::Single Method_2_561D8F24FFF54197(::System::Int32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_125A8668F94B4EAE_METHOD_2_561D8F24FFF54197_OFFSET))(this, a1);
	}

	::System::Void Method_2_94E2BE105744618C(::Enum_3_8033C6652F9AC672 a1, ::System::Boolean a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_8033C6652F9AC672, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_125A8668F94B4EAE_METHOD_2_94E2BE105744618C_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_2_5A449DAD1668B956(::UnityEngine::Vector3 a1, ::MoleMole::CharacterCameraDitheringData& a2)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::MoleMole::CharacterCameraDitheringData&))((::PBYTE)hIl2Cpp + CLASS_2_125A8668F94B4EAE_METHOD_2_5A449DAD1668B956_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_2_66A038FD5DBE6F9A_1(::UnityEngine::Collider* a1, ::Class_1_494697B4AB731572_Enum_3_7027F8F289F82CE3 a2)
	{
		return ((::System::Void(*)(::UnityEngine::Collider*, ::Class_1_494697B4AB731572_Enum_3_7027F8F289F82CE3))((::PBYTE)hIl2Cpp + CLASS_2_125A8668F94B4EAE_METHOD_2_66A038FD5DBE6F9A_1_OFFSET))(a1, a2);
	}

	::System::Void Method_2_BAA2E6A42078A6BC(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_125A8668F94B4EAE_METHOD_2_BAA2E6A42078A6BC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_125A8668F94B4EAE_METHOD_2_832295EC279E5994_1_OFFSET))(this);
	}

	::System::Void Method_2_EE3A4E396E0061E4(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_125A8668F94B4EAE_METHOD_2_EE3A4E396E0061E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_0B95AB08ADAE3CF8(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_125A8668F94B4EAE_METHOD_2_0B95AB08ADAE3CF8_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_809E2B11AB7DE14B(::UnityEngine::Collider* a1)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_125A8668F94B4EAE_METHOD_2_809E2B11AB7DE14B_OFFSET))(this, a1);
	}

	::System::Void Method_2_D60D92AB14605D56(::Il2CppArray<::UnityEngine::Collider*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Collider*>*))((::PBYTE)hIl2Cpp + CLASS_2_125A8668F94B4EAE_METHOD_2_D60D92AB14605D56_OFFSET))(this, a1);
	}

	::System::Void Method_2_92F2FCA8316DB56D(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_125A8668F94B4EAE_METHOD_2_92F2FCA8316DB56D_OFFSET))(this, a1);
	}

	::System::Void Method_2_3BFE3B9EF8374F61()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_125A8668F94B4EAE_METHOD_2_3BFE3B9EF8374F61_OFFSET))(this);
	}

	::System::Void Method_2_622711FDBF153600(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_125A8668F94B4EAE_METHOD_2_622711FDBF153600_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_125A8668F94B4EAE_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_2_ADAE84B98D00E7E3(::Il2CppArray<::UnityEngine::Renderer*>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + CLASS_2_125A8668F94B4EAE_METHOD_2_ADAE84B98D00E7E3_OFFSET))(this, a1);
	}

	::System::Void Method_2_DB21D8D1515B47C6(::System::String* a1, ::Class_2_125A8668F94B4EAE_Struct_2_B1088F951BCB4BAD a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_2_125A8668F94B4EAE_Struct_2_B1088F951BCB4BAD))((::PBYTE)hIl2Cpp + CLASS_2_125A8668F94B4EAE_METHOD_2_DB21D8D1515B47C6_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_2_54871F6DFC8EB119(::UnityEngine::Collider* a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_125A8668F94B4EAE_METHOD_2_54871F6DFC8EB119_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_7658214FA014B4F3(::UnityEngine::Material* a1, ::System::Single& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Material*, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_125A8668F94B4EAE_METHOD_2_7658214FA014B4F3_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_36E6049D537BF6AE(::UnityEngine::Vector3 a1, ::MoleMole::CharacterCameraDitheringData a2)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::MoleMole::CharacterCameraDitheringData))((::PBYTE)hIl2Cpp + CLASS_2_125A8668F94B4EAE_METHOD_2_36E6049D537BF6AE_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_93FBAE2442837DF5(::UnityEngine::Collider* a1, ::Class_0_16E4307DCC419505_135*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*, ::Class_0_16E4307DCC419505_135*&))((::PBYTE)hIl2Cpp + CLASS_2_125A8668F94B4EAE_METHOD_2_93FBAE2442837DF5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DECD7BC1C617AF4(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_125A8668F94B4EAE_METHOD_2_9DECD7BC1C617AF4_OFFSET))(this, a1);
	}

	::System::Void Method_2_10DA236D7F5B18F9(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_125A8668F94B4EAE_METHOD_2_10DA236D7F5B18F9_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_3F1A5F0DB7432C33(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_125A8668F94B4EAE_METHOD_2_3F1A5F0DB7432C33_OFFSET))(this, a1);
	}

	::System::Void Method_2_9F218BA7C451254A(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_125A8668F94B4EAE_METHOD_2_9F218BA7C451254A_OFFSET))(this, a1);
	}

	::System::Void Method_2_25BA604622A77AF9(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_125A8668F94B4EAE_METHOD_2_25BA604622A77AF9_OFFSET))(this, a1);
	}

	::System::Void Method_2_62167C28EC14CC63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_125A8668F94B4EAE_METHOD_2_62167C28EC14CC63_OFFSET))(this);
	}

	::System::Void Method_2_9990763B5163E37F_1(::Enum_3_91322E66F4CC7ECA a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_91322E66F4CC7ECA, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_125A8668F94B4EAE_METHOD_2_9990763B5163E37F_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B88BC3A1DBB2864B(::UnityEngine::Collider* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_125A8668F94B4EAE_METHOD_2_B88BC3A1DBB2864B_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_125A8668F94B4EAE_METHOD_2_F5447CD65612575D_OFFSET))(this);
	}

	::System::Int32 Method_2_91C49E403D4C5D47(::System::Func_2<::MoleMole::Battle::Entity*, ::System::Boolean>* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Func_2<::MoleMole::Battle::Entity*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_2_125A8668F94B4EAE_METHOD_2_91C49E403D4C5D47_OFFSET))(this, a1);
	}
};
