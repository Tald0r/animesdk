#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/Config/ConfigMisc_EffectMaterialControlConfig.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_984AA94FB23486F9_2.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_7154D0BBCC10777B;
class Class_3_A5AF8EA2F7094EFB_Class_1_6D78250EABD443CF;
class EtherEyeParticleMesh;
namespace MoleMole { class DynamicBoneParaSwitch; }
namespace MoleMole { class MonoEffect; }
namespace MoleMole { class MonoEffectPluginAttachPoint; }
namespace MoleMole { class MonoEffectPluginAudio; }
namespace MoleMole::Battle { class XWeaponTrailCustom; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Renderer; }

#define CLASS_3_A5AF8EA2F7094EFB_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x80A6810)
#define CLASS_3_A5AF8EA2F7094EFB_METHOD_3_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x80A86F0)
#define CLASS_3_A5AF8EA2F7094EFB_METHOD_3_321956A685BE9219_OFFSET UNITYSDK_OFFSET(0x80A8210)
#define CLASS_3_A5AF8EA2F7094EFB_METHOD_3_36D8543FC20E22FB_1_OFFSET UNITYSDK_OFFSET(0x80A7190)
#define CLASS_3_A5AF8EA2F7094EFB_METHOD_3_36D8543FC20E22FB_OFFSET UNITYSDK_OFFSET(0x80A6DB0)
#define CLASS_3_A5AF8EA2F7094EFB_METHOD_3_4E181AF167317911_OFFSET UNITYSDK_OFFSET(0x80A8A60)
#define CLASS_3_A5AF8EA2F7094EFB_METHOD_3_739FB74B4E389D76_OFFSET UNITYSDK_OFFSET(0x80A7BD0)
#define CLASS_3_A5AF8EA2F7094EFB_METHOD_3_78E5D10876D30BCC_OFFSET UNITYSDK_OFFSET(0x80A65F0)
#define CLASS_3_A5AF8EA2F7094EFB_METHOD_3_7BD7569E9D724378_OFFSET UNITYSDK_OFFSET(0x80A7670)
#define CLASS_3_A5AF8EA2F7094EFB_METHOD_3_7DFB4B9C80198D98_OFFSET UNITYSDK_OFFSET(0x80A6AF0)
#define CLASS_3_A5AF8EA2F7094EFB_METHOD_3_7ECCD43C14D02F07_OFFSET UNITYSDK_OFFSET(0x80A7E80)
#define CLASS_3_A5AF8EA2F7094EFB_METHOD_3_88B0F637720F7E98_OFFSET UNITYSDK_OFFSET(0x80A7510)
#define CLASS_3_A5AF8EA2F7094EFB_METHOD_3_8EBC895BFDF8F242_OFFSET UNITYSDK_OFFSET(0x80A7A90)
#define CLASS_3_A5AF8EA2F7094EFB_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x80A8400)
#define CLASS_3_A5AF8EA2F7094EFB_METHOD_3_AF088DD8936FBFFF_1_OFFSET UNITYSDK_OFFSET(0x80A7330)
#define CLASS_3_A5AF8EA2F7094EFB_METHOD_3_AF088DD8936FBFFF_2_OFFSET UNITYSDK_OFFSET(0x80A7880)
#define CLASS_3_A5AF8EA2F7094EFB_METHOD_3_AF088DD8936FBFFF_OFFSET UNITYSDK_OFFSET(0x80A6F10)
#define CLASS_3_A5AF8EA2F7094EFB_METHOD_3_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x80A7A80)
#define CLASS_3_A5AF8EA2F7094EFB_METHOD_3_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x80A7A60)
#define CLASS_3_A5AF8EA2F7094EFB_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x80A70F0)
#define CLASS_3_A5AF8EA2F7094EFB_METHOD_3_D15708DF941619D4_1_OFFSET UNITYSDK_OFFSET(0x80A7CF0)
#define CLASS_3_A5AF8EA2F7094EFB_METHOD_3_D15708DF941619D4_2_OFFSET UNITYSDK_OFFSET(0x80A8460)
#define CLASS_3_A5AF8EA2F7094EFB_METHOD_3_D15708DF941619D4_3_OFFSET UNITYSDK_OFFSET(0x80A8770)
#define CLASS_3_A5AF8EA2F7094EFB_METHOD_3_D15708DF941619D4_4_OFFSET UNITYSDK_OFFSET(0x80A9030)
#define CLASS_3_A5AF8EA2F7094EFB_METHOD_3_D15708DF941619D4_OFFSET UNITYSDK_OFFSET(0x80A6B30)
#define CLASS_3_A5AF8EA2F7094EFB_METHOD_3_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x80A7E70)
#define CLASS_3_A5AF8EA2F7094EFB_METHOD_3_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x80A83F0)
#define CLASS_3_A5AF8EA2F7094EFB_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x80A7A70)
#define CLASS_3_A5AF8EA2F7094EFB_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x80A5C60)
#define CLASS_3_A5AF8EA2F7094EFB__CCTOR_OFFSET UNITYSDK_OFFSET(0x80A6870)
#define CLASS_3_A5AF8EA2F7094EFB__CTOR_OFFSET UNITYSDK_OFFSET(0x80A68F0)

inline static constexpr unsigned int Class_3_A5AF8EA2F7094EFB_TypeDefinitionIndex = 67322;

class Class_3_A5AF8EA2F7094EFB : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_60 = 0x68; // 0x0
	::Il2CppArray<::MoleMole::DynamicBoneParaSwitch*>* Field_3_37; // 0x48
	::System::Collections::Generic::List_1<::Il2CppArray<::UnityEngine::Renderer*>*>* Field_3_11; // 0x50
	::EtherEyeParticleMesh* Field_3_30; // 0x58
	::MoleMole::EntityHandle Field_3_31; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::GameObject*>* Field_3_35; // 0x70
	::Class_1_7154D0BBCC10777B* Field_3_20; // 0x78
	::MoleMole::MonoEffectPluginAudio* Field_3_29; // 0x80
	::Il2CppArray<::UnityEngine::Animation*>* Field_3_15; // 0x88
	::System::Collections::Generic::List_1<::Il2CppArray<::UnityEngine::Light*>*>* Field_3_9; // 0x90
	::System::Action_1<::UnityEngine::GameObject*>* Field_3_51; // 0x98
	::System::Collections::Generic::List_1<::UnityEngine::Material*>* Field_3_54; // 0xA0
	::System::Collections::Generic::List_1<::UnityEngine::Material*>* Field_3_34; // 0xA8
	::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>* Field_3_38; // 0xB0
	::UnityEngine::GameObject* Field_3_6; // 0xB8
	::UnityEngine::Animation* Field_3_14; // 0xC0
	::MoleMole::MonoEffectPluginAttachPoint* Field_3_28; // 0xC8
	::Il2CppArray<::UnityEngine::ParticleSystem*>* Field_3_12; // 0xD0
	::MoleMole::Config::ConfigMisc_EffectMaterialControlConfig Field_3_55; // 0xD8
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*>* Field_3_53; // 0xE8
	::MoleMole::Battle::XWeaponTrailCustom* Field_3_27; // 0xF0
	::Il2CppArray<::System::Boolean>* Field_3_8; // 0xF8
	::System::Action_2<::UnityEngine::Renderer*, ::System::Boolean>* Field_3_50; // 0x100
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::String*>*>* Field_3_59; // 0x108
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>* Field_3_58; // 0x110
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::Collections::Generic::List_1<::Class_3_A5AF8EA2F7094EFB_Class_1_6D78250EABD443CF*>*>* Field_3_49; // 0x118
	::Il2CppArray<::UnityEngine::Light*>* Field_3_7; // 0x120
	::MoleMole::MonoEffect* Field_3_22; // 0x128
	::System::Collections::Generic::List_1<::Struct_2_984AA94FB23486F9_2>* Field_3_36; // 0x130
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Field_3_33; // 0x138
	::Foundation::AssetPath Field_3_0; // 0x140
	::MoleMole::Config::ConfigMisc_EffectMaterialControlConfig Field_3_56; // 0x150
	::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::System::Int32>* Field_3_39; // 0x160
	::Il2CppArray<::UnityEngine::Renderer*>* Field_3_10; // 0x168
	::UnityEngine::Quaternion Field_3_47; // 0x170
	::System::Single Field_3_57; // 0x180
	::UnityEngine::Vector3 Field_3_19; // 0x184
	::System::Int32 Field_3_26; // 0x190
	::System::Boolean Field_3_25; // 0x194
	::System::Boolean Field_3_23; // 0x195
	::System::Boolean Field_3_2; // 0x196
	::System::Boolean Field_3_42; // 0x197
	::UnityEngine::Vector3 Field_3_48; // 0x198
	::UnityEngine::Vector3 Field_3_17; // 0x1A4
	::System::Boolean Field_3_4; // 0x1B0
	::System::Boolean Field_3_32; // 0x1B1
	::System::Boolean Field_3_40; // 0x1B2
	::System::Boolean Field_3_13; // 0x1B3
	::UnityEngine::Vector3 Field_3_16; // 0x1B4
	::UnityEngine::Vector3 Field_3_46; // 0x1C0
	::UnityEngine::Vector3 Field_3_18; // 0x1CC
	::System::Boolean Field_3_1; // 0x1D8
	::System::Boolean Field_3_41; // 0x1D9
	::System::Boolean Field_3_24; // 0x1DA
	::System::Nullable_1<::System::Boolean> Field_3_52; // 0x1DB
	::System::Boolean Field_3_3; // 0x1DD
	::System::Boolean Field_3_5; // 0x1DE
	::System::Boolean Field_3_21; // 0x1DF
	::UnityEngine::Quaternion Field_3_45; // 0x1E0
	::UnityEngine::Vector3 Field_3_43; // 0x1F0
	::UnityEngine::Vector3 Field_3_44; // 0x1FC

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_A5AF8EA2F7094EFB__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A5AF8EA2F7094EFB__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A5AF8EA2F7094EFB_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A5AF8EA2F7094EFB_GETCLASSID_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_3_7DFB4B9C80198D98()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A5AF8EA2F7094EFB_METHOD_3_7DFB4B9C80198D98_OFFSET))(this);
	}

	::System::Void Method_3_36D8543FC20E22FB(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_A5AF8EA2F7094EFB_METHOD_3_36D8543FC20E22FB_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_AF088DD8936FBFFF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A5AF8EA2F7094EFB_METHOD_3_AF088DD8936FBFFF_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_3_D15708DF941619D4()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A5AF8EA2F7094EFB_METHOD_3_D15708DF941619D4_OFFSET))(this);
	}

	static ::Class_3_A5AF8EA2F7094EFB* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_A5AF8EA2F7094EFB*(*)())((::PBYTE)hIl2Cpp + CLASS_3_A5AF8EA2F7094EFB_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Void Method_3_36D8543FC20E22FB_1(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_A5AF8EA2F7094EFB_METHOD_3_36D8543FC20E22FB_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_AF088DD8936FBFFF_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A5AF8EA2F7094EFB_METHOD_3_AF088DD8936FBFFF_1_OFFSET))(this);
	}

	::UnityEngine::Quaternion Method_3_88B0F637720F7E98()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A5AF8EA2F7094EFB_METHOD_3_88B0F637720F7E98_OFFSET))(this);
	}

	::System::Void Method_3_7BD7569E9D724378(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_A5AF8EA2F7094EFB_METHOD_3_7BD7569E9D724378_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_AF088DD8936FBFFF_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A5AF8EA2F7094EFB_METHOD_3_AF088DD8936FBFFF_2_OFFSET))(this);
	}

	::System::Void Method_3_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_A5AF8EA2F7094EFB_METHOD_3_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A5AF8EA2F7094EFB_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_3_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_A5AF8EA2F7094EFB_METHOD_3_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_8EBC895BFDF8F242(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_A5AF8EA2F7094EFB_METHOD_3_8EBC895BFDF8F242_OFFSET))(this, a1);
	}

	::System::Void Method_3_739FB74B4E389D76(::UnityEngine::Quaternion a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_3_A5AF8EA2F7094EFB_METHOD_3_739FB74B4E389D76_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_3_D15708DF941619D4_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A5AF8EA2F7094EFB_METHOD_3_D15708DF941619D4_1_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A5AF8EA2F7094EFB_METHOD_3_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_3_78E5D10876D30BCC(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_A5AF8EA2F7094EFB_METHOD_3_78E5D10876D30BCC_OFFSET))(this, a1);
	}

	::System::Void Method_3_7ECCD43C14D02F07(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::System::String* a5, ::Class_1_7154D0BBCC10777B* a6)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::String*, ::Class_1_7154D0BBCC10777B*))((::PBYTE)hIl2Cpp + CLASS_3_A5AF8EA2F7094EFB_METHOD_3_7ECCD43C14D02F07_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A5AF8EA2F7094EFB_METHOD_3_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A5AF8EA2F7094EFB_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_3_D15708DF941619D4_2()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A5AF8EA2F7094EFB_METHOD_3_D15708DF941619D4_2_OFFSET))(this);
	}

	::System::Boolean Method_3_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A5AF8EA2F7094EFB_METHOD_3_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_3_321956A685BE9219(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::Foundation::AssetPath a5, ::Class_1_7154D0BBCC10777B* a6)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Foundation::AssetPath, ::Class_1_7154D0BBCC10777B*))((::PBYTE)hIl2Cpp + CLASS_3_A5AF8EA2F7094EFB_METHOD_3_321956A685BE9219_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::UnityEngine::Vector3 Method_3_D15708DF941619D4_3()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A5AF8EA2F7094EFB_METHOD_3_D15708DF941619D4_3_OFFSET))(this);
	}

	::System::Void Method_3_4E181AF167317911(::UnityEngine::GameObject* a1, ::Class_1_7154D0BBCC10777B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::Class_1_7154D0BBCC10777B*))((::PBYTE)hIl2Cpp + CLASS_3_A5AF8EA2F7094EFB_METHOD_3_4E181AF167317911_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_3_D15708DF941619D4_4()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A5AF8EA2F7094EFB_METHOD_3_D15708DF941619D4_4_OFFSET))(this);
	}
};
