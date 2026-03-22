#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_CEC393DDA7BD65D6.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/Arcade/BallsRace/Client/BrChangeColorEvent.h"
#include "unitysdk/MoleMole/Arcade/BallsRace/Client/BrMaterialCfg.h"
#include "unitysdk/MoleMole/Arcade/BallsRace/Client/BrScreenEffect.h"
#include "unitysdk/MoleMole/Arcade/BallsRace/EBrSpeedLevel.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/Struct_2_642E45C6B0A5D00A.h"
#include "unitysdk/Struct_2_806835FEF27B0BFC_2.h"
#include "unitysdk/Struct_2_806835FEF27B0BFC_3.h"
#include "unitysdk/Struct_2_825CDBE011CA0682_1.h"
#include "unitysdk/Struct_2_DE6E731B8C5A5FB8.h"
#include "unitysdk/Struct_2_FBDDDFB807AE5AF5.h"
#include "unitysdk/Struct_2_FBDDDFB807AE5AF5_2.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_1_5E8D7F836DA392F9;
class Class_1_E85C6B6436A9E3DA;
class Class_3_96CE54D1B5F2FEE8;
class Class_4_6B5E197F92845903;
class Class_4_932266083770655D;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Rendering { class Volume; }

#define CLASS_3_F84D44A8D394E461_METHOD_3_0C0D5E05C5E1A684_OFFSET UNITYSDK_OFFSET(0x1A46B3D0)
#define CLASS_3_F84D44A8D394E461_METHOD_3_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x1A4691A0)
#define CLASS_3_F84D44A8D394E461_METHOD_3_1627E1D2A11A3F11_OFFSET UNITYSDK_OFFSET(0x1A46B430)
#define CLASS_3_F84D44A8D394E461_METHOD_3_2177C24A5E2E46CB_OFFSET UNITYSDK_OFFSET(0x1A468C10)
#define CLASS_3_F84D44A8D394E461_METHOD_3_2220EB5C422E1E9A_OFFSET UNITYSDK_OFFSET(0x1A46B6A0)
#define CLASS_3_F84D44A8D394E461_METHOD_3_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x1A46C2B0)
#define CLASS_3_F84D44A8D394E461_METHOD_3_3CDB5DB8BD0AC758_OFFSET UNITYSDK_OFFSET(0x1A469DE0)
#define CLASS_3_F84D44A8D394E461_METHOD_3_51F2B897ACF469BD_OFFSET UNITYSDK_OFFSET(0x1A46BA90)
#define CLASS_3_F84D44A8D394E461_METHOD_3_5A1C85235CA302C3_OFFSET UNITYSDK_OFFSET(0x1A46ACC0)
#define CLASS_3_F84D44A8D394E461_METHOD_3_62C7224EE5981F41_OFFSET UNITYSDK_OFFSET(0x1A46ABB0)
#define CLASS_3_F84D44A8D394E461_METHOD_3_66C5F1268DD8D2FC_OFFSET UNITYSDK_OFFSET(0x1A46C650)
#define CLASS_3_F84D44A8D394E461_METHOD_3_6DBAC098C536AE97_OFFSET UNITYSDK_OFFSET(0x1A46C320)
#define CLASS_3_F84D44A8D394E461_METHOD_3_6FD22C75466F5A1F_OFFSET UNITYSDK_OFFSET(0x1A469370)
#define CLASS_3_F84D44A8D394E461_METHOD_3_7676F353E6B13301_OFFSET UNITYSDK_OFFSET(0x1A46CFC0)
#define CLASS_3_F84D44A8D394E461_METHOD_3_7B2FC6EF15B67241_OFFSET UNITYSDK_OFFSET(0x1A46AFE0)
#define CLASS_3_F84D44A8D394E461_METHOD_3_862ECDA1F0D5FD2B_OFFSET UNITYSDK_OFFSET(0x1A469C20)
#define CLASS_3_F84D44A8D394E461_METHOD_3_8E22B572EA9F050D_OFFSET UNITYSDK_OFFSET(0x1A468F60)
#define CLASS_3_F84D44A8D394E461_METHOD_3_94B85104EDEA4FFB_OFFSET UNITYSDK_OFFSET(0x1A46DB80)
#define CLASS_3_F84D44A8D394E461_METHOD_3_9DDAE898B4D561F7_OFFSET UNITYSDK_OFFSET(0x1A46BC10)
#define CLASS_3_F84D44A8D394E461_METHOD_3_9E38127F40B34F1F_OFFSET UNITYSDK_OFFSET(0x1A469A20)
#define CLASS_3_F84D44A8D394E461_METHOD_3_B1AC642A1B02DA97_OFFSET UNITYSDK_OFFSET(0x1A46C170)
#define CLASS_3_F84D44A8D394E461_METHOD_3_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0x1A46BFD0)
#define CLASS_3_F84D44A8D394E461_METHOD_3_C240407BAEA69CE9_OFFSET UNITYSDK_OFFSET(0x1A46B4D0)
#define CLASS_3_F84D44A8D394E461_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1A46DCF0)
#define CLASS_3_F84D44A8D394E461_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1A46DC10)
#define CLASS_3_F84D44A8D394E461_METHOD_3_DCE709D1A4B35861_OFFSET UNITYSDK_OFFSET(0x1A46DA00)
#define CLASS_3_F84D44A8D394E461_METHOD_3_E9A575D18A0748D9_1_OFFSET UNITYSDK_OFFSET(0x1A46DB10)
#define CLASS_3_F84D44A8D394E461_METHOD_3_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x1A46AB40)
#define CLASS_3_F84D44A8D394E461_METHOD_3_EE7339DA6ECF5F6D_OFFSET UNITYSDK_OFFSET(0x1A469400)
#define CLASS_3_F84D44A8D394E461_METHOD_3_F496D09C9E81EEF0_1_OFFSET UNITYSDK_OFFSET(0x1A46DC70)
#define CLASS_3_F84D44A8D394E461_METHOD_3_F496D09C9E81EEF0_OFFSET UNITYSDK_OFFSET(0x1A46C5D0)
#define CLASS_3_F84D44A8D394E461__CTOR_OFFSET UNITYSDK_OFFSET(0x1A46A9E0)

inline static constexpr unsigned int Class_3_F84D44A8D394E461_TypeDefinitionIndex = 80155;

class Class_3_F84D44A8D394E461 : public ::Class_2_CEC393DDA7BD65D6
{
public:
	// static const ::System::String* Field_3_0; // 0x0
	// static const ::System::String* Field_3_1; // 0x0
	// static const ::System::String* Field_3_2; // 0x0
	// static const ::System::String* Field_3_3; // 0x0
	::Class_4_6B5E197F92845903* Field_3_4; // 0x28
	::Il2CppArray<::MoleMole::Arcade::BallsRace::Client::BrMaterialCfg>* Field_3_11; // 0x30
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_3_5; // 0x38
	::Il2CppArray<::MoleMole::Arcade::BallsRace::Client::BrMaterialCfg>* Field_3_9; // 0x40
	::Il2CppArray<::MoleMole::Arcade::BallsRace::Client::BrMaterialCfg>* Field_3_10; // 0x48
	::MoleMole::Arcade::BallsRace::EBrSpeedLevel Field_3_17; // 0x50
	::UnityEngine::Color Field_3_12; // 0x54
	::System::Single Field_3_7; // 0x64
	::System::Single Field_3_6; // 0x68
	::UnityEngine::Color Field_3_13; // 0x6C
	::System::Single Field_3_8; // 0x7C
	::System::Int32 Field_3_16; // 0x80
	::UnityEngine::Color Field_3_14; // 0x84
	::UnityEngine::Color Field_3_15; // 0x94

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F84D44A8D394E461__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_2177C24A5E2E46CB(::Class_1_E85C6B6436A9E3DA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E85C6B6436A9E3DA*))((::PBYTE)hIl2Cpp + CLASS_3_F84D44A8D394E461_METHOD_3_2177C24A5E2E46CB_OFFSET))(this, a1);
	}

	::System::Void Method_3_8E22B572EA9F050D(::Class_1_E85C6B6436A9E3DA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E85C6B6436A9E3DA*))((::PBYTE)hIl2Cpp + CLASS_3_F84D44A8D394E461_METHOD_3_8E22B572EA9F050D_OFFSET))(this, a1);
	}

	::System::Void Method_3_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F84D44A8D394E461_METHOD_3_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_3_EE7339DA6ECF5F6D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F84D44A8D394E461_METHOD_3_EE7339DA6ECF5F6D_OFFSET))(this);
	}

	::System::Void Method_3_862ECDA1F0D5FD2B(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_F84D44A8D394E461_METHOD_3_862ECDA1F0D5FD2B_OFFSET))(this, a1);
	}

	::System::Void Method_3_E9A575D18A0748D9(::Class_1_E85C6B6436A9E3DA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E85C6B6436A9E3DA*))((::PBYTE)hIl2Cpp + CLASS_3_F84D44A8D394E461_METHOD_3_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_3_62C7224EE5981F41(::Struct_2_FBDDDFB807AE5AF5 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FBDDDFB807AE5AF5))((::PBYTE)hIl2Cpp + CLASS_3_F84D44A8D394E461_METHOD_3_62C7224EE5981F41_OFFSET))(this, a1);
	}

	::System::Void Method_3_7B2FC6EF15B67241(::Class_4_932266083770655D* a1, ::Foundation::AssetPath a2, ::System::String* a3, ::UnityEngine::Transform* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_932266083770655D*, ::Foundation::AssetPath, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_3_F84D44A8D394E461_METHOD_3_7B2FC6EF15B67241_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_9E38127F40B34F1F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F84D44A8D394E461_METHOD_3_9E38127F40B34F1F_OFFSET))(this);
	}

	::UnityEngine::Rendering::Volume* Method_3_0C0D5E05C5E1A684()
	{
		return ((::UnityEngine::Rendering::Volume*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F84D44A8D394E461_METHOD_3_0C0D5E05C5E1A684_OFFSET))(this);
	}

	::System::Void Method_3_5A1C85235CA302C3(::System::Int32 a1, ::Class_3_96CE54D1B5F2FEE8* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_3_96CE54D1B5F2FEE8*))((::PBYTE)hIl2Cpp + CLASS_3_F84D44A8D394E461_METHOD_3_5A1C85235CA302C3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_1627E1D2A11A3F11(::Class_1_5E8D7F836DA392F9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5E8D7F836DA392F9*))((::PBYTE)hIl2Cpp + CLASS_3_F84D44A8D394E461_METHOD_3_1627E1D2A11A3F11_OFFSET))(this, a1);
	}

	::System::Void Method_3_3CDB5DB8BD0AC758(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_F84D44A8D394E461_METHOD_3_3CDB5DB8BD0AC758_OFFSET))(this, a1);
	}

	::System::Void Method_3_C240407BAEA69CE9(::Struct_2_806835FEF27B0BFC_2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_806835FEF27B0BFC_2))((::PBYTE)hIl2Cpp + CLASS_3_F84D44A8D394E461_METHOD_3_C240407BAEA69CE9_OFFSET))(this, a1);
	}

	::System::Void Method_3_51F2B897ACF469BD(::Struct_2_FBDDDFB807AE5AF5_2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FBDDDFB807AE5AF5_2))((::PBYTE)hIl2Cpp + CLASS_3_F84D44A8D394E461_METHOD_3_51F2B897ACF469BD_OFFSET))(this, a1);
	}

	::System::Void Method_3_9DDAE898B4D561F7(::Struct_2_642E45C6B0A5D00A a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_642E45C6B0A5D00A))((::PBYTE)hIl2Cpp + CLASS_3_F84D44A8D394E461_METHOD_3_9DDAE898B4D561F7_OFFSET))(this, a1);
	}

	::System::Void Method_3_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_F84D44A8D394E461_METHOD_3_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_3_B1AC642A1B02DA97(::System::Collections::Generic::List_1<::MoleMole::Arcade::BallsRace::Client::BrScreenEffect>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Arcade::BallsRace::Client::BrScreenEffect>*))((::PBYTE)hIl2Cpp + CLASS_3_F84D44A8D394E461_METHOD_3_B1AC642A1B02DA97_OFFSET))(this, a1);
	}

	::System::Void Method_3_2220EB5C422E1E9A(::Class_4_932266083770655D* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_932266083770655D*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_F84D44A8D394E461_METHOD_3_2220EB5C422E1E9A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_B7F8E0B4AF22DEA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F84D44A8D394E461_METHOD_3_B7F8E0B4AF22DEA3_OFFSET))(this);
	}

	::System::Void Method_3_F496D09C9E81EEF0(::Class_4_932266083770655D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_932266083770655D*))((::PBYTE)hIl2Cpp + CLASS_3_F84D44A8D394E461_METHOD_3_F496D09C9E81EEF0_OFFSET))(this, a1);
	}

	::System::Void Method_3_66C5F1268DD8D2FC(::Struct_2_825CDBE011CA0682_1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_825CDBE011CA0682_1))((::PBYTE)hIl2Cpp + CLASS_3_F84D44A8D394E461_METHOD_3_66C5F1268DD8D2FC_OFFSET))(this, a1);
	}

	::System::Void Method_3_7676F353E6B13301(::Struct_2_806835FEF27B0BFC_3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_806835FEF27B0BFC_3))((::PBYTE)hIl2Cpp + CLASS_3_F84D44A8D394E461_METHOD_3_7676F353E6B13301_OFFSET))(this, a1);
	}

	::System::Void Method_3_DCE709D1A4B35861(::Struct_2_DE6E731B8C5A5FB8 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_DE6E731B8C5A5FB8))((::PBYTE)hIl2Cpp + CLASS_3_F84D44A8D394E461_METHOD_3_DCE709D1A4B35861_OFFSET))(this, a1);
	}

	::System::Void Method_3_E9A575D18A0748D9_1(::Class_1_E85C6B6436A9E3DA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E85C6B6436A9E3DA*))((::PBYTE)hIl2Cpp + CLASS_3_F84D44A8D394E461_METHOD_3_E9A575D18A0748D9_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_94B85104EDEA4FFB(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_F84D44A8D394E461_METHOD_3_94B85104EDEA4FFB_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F84D44A8D394E461_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_6FD22C75466F5A1F(::MoleMole::Arcade::BallsRace::Client::BrChangeColorEvent a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Arcade::BallsRace::Client::BrChangeColorEvent))((::PBYTE)hIl2Cpp + CLASS_3_F84D44A8D394E461_METHOD_3_6FD22C75466F5A1F_OFFSET))(this, a1);
	}

	::System::Void Method_3_6DBAC098C536AE97(::MoleMole::Config::ScreenEffectType a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ScreenEffectType, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_F84D44A8D394E461_METHOD_3_6DBAC098C536AE97_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_F496D09C9E81EEF0_1(::Class_4_932266083770655D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_932266083770655D*))((::PBYTE)hIl2Cpp + CLASS_3_F84D44A8D394E461_METHOD_3_F496D09C9E81EEF0_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F84D44A8D394E461_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}
};
