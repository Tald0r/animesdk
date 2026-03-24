#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1DC99F3008D2ACD0_Struct_2_B94BC0827717B30A.h"
#include "unitysdk/Class_1_1DC99F3008D2ACD0_Struct_2_E81A211B6662113C.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector3Int.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_1DC99F3008D2ACD0_Class_1_536C40F101440DEA;
namespace MoleMole { class MonoDynamicObjectVoxel; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class CancellationTokenSource; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define CLASS_1_1DC99F3008D2ACD0_METHOD_1_0A184EE642E607E1_1_OFFSET UNITYSDK_OFFSET(0x10BA0CC0)
#define CLASS_1_1DC99F3008D2ACD0_METHOD_1_0A184EE642E607E1_OFFSET UNITYSDK_OFFSET(0x10BA09A0)
#define CLASS_1_1DC99F3008D2ACD0_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x10BA2230)
#define CLASS_1_1DC99F3008D2ACD0_METHOD_1_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x10BA0D40)
#define CLASS_1_1DC99F3008D2ACD0_METHOD_1_2EC46FA4229F9341_1_OFFSET UNITYSDK_OFFSET(0x10BA18D0)
#define CLASS_1_1DC99F3008D2ACD0_METHOD_1_2EC46FA4229F9341_OFFSET UNITYSDK_OFFSET(0x10BA0990)
#define CLASS_1_1DC99F3008D2ACD0_METHOD_1_33ACA6CB2ABC73F7_1_OFFSET UNITYSDK_OFFSET(0x10BA13C0)
#define CLASS_1_1DC99F3008D2ACD0_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x10BA0790)
#define CLASS_1_1DC99F3008D2ACD0_METHOD_1_3CDF8B860E4357D4_OFFSET UNITYSDK_OFFSET(0x10B9FC20)
#define CLASS_1_1DC99F3008D2ACD0_METHOD_1_3D4CEC1B38D5DF24_OFFSET UNITYSDK_OFFSET(0x10BA12A0)
#define CLASS_1_1DC99F3008D2ACD0_METHOD_1_3F270119FDAA4E2D_OFFSET UNITYSDK_OFFSET(0x10BA11B0)
#define CLASS_1_1DC99F3008D2ACD0_METHOD_1_4ECE13C71D259CF7_OFFSET UNITYSDK_OFFSET(0x10BA0DB0)
#define CLASS_1_1DC99F3008D2ACD0_METHOD_1_50DD3D69824E112C_1_OFFSET UNITYSDK_OFFSET(0x10BA2220)
#define CLASS_1_1DC99F3008D2ACD0_METHOD_1_50DD3D69824E112C_OFFSET UNITYSDK_OFFSET(0x10BA18C0)
#define CLASS_1_1DC99F3008D2ACD0_METHOD_1_55B5469E48145079_OFFSET UNITYSDK_OFFSET(0x10BA2840)
#define CLASS_1_1DC99F3008D2ACD0_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x10B9F9C0)
#define CLASS_1_1DC99F3008D2ACD0_METHOD_1_96A53A17AC5D0E93_OFFSET UNITYSDK_OFFSET(0x10B9F4C0)
#define CLASS_1_1DC99F3008D2ACD0_METHOD_1_9C3D8ED2211D368B_1_OFFSET UNITYSDK_OFFSET(0x10BA08D0)
#define CLASS_1_1DC99F3008D2ACD0_METHOD_1_9C3D8ED2211D368B_OFFSET UNITYSDK_OFFSET(0x10B9FB50)
#define CLASS_1_1DC99F3008D2ACD0_METHOD_1_9CD144BB0A106E3F_OFFSET UNITYSDK_OFFSET(0x10BA22C0)
#define CLASS_1_1DC99F3008D2ACD0_METHOD_1_AAFE5309A4703271_OFFSET UNITYSDK_OFFSET(0x10BA14C0)
#define CLASS_1_1DC99F3008D2ACD0_METHOD_1_B9A97467188E4B69_OFFSET UNITYSDK_OFFSET(0x10BA18E0)
#define CLASS_1_1DC99F3008D2ACD0_METHOD_1_D65B70E08ED7E38A_OFFSET UNITYSDK_OFFSET(0x10BA0A20)
#define CLASS_1_1DC99F3008D2ACD0_METHOD_1_D77C7F36877B6EE1_OFFSET UNITYSDK_OFFSET(0x10B9ED70)
#define CLASS_1_1DC99F3008D2ACD0_METHOD_1_F0C8024E35DC873C_OFFSET UNITYSDK_OFFSET(0x10BA2210)
#define CLASS_1_1DC99F3008D2ACD0_METHOD_1_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0x10B9FA90)
#define CLASS_1_1DC99F3008D2ACD0__CCTOR_OFFSET UNITYSDK_OFFSET(0x10B9EC60)
#define CLASS_1_1DC99F3008D2ACD0__CTOR_OFFSET UNITYSDK_OFFSET(0x10B9E600)

inline static constexpr unsigned int Class_1_1DC99F3008D2ACD0_TypeDefinitionIndex = 38012;

class Class_1_1DC99F3008D2ACD0 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_11()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1DC99F3008D2ACD0_TypeDefinitionIndex)->GetStaticField(0xEC80);
	}
	static ::System::Int32* StaticGet_Field_1_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1DC99F3008D2ACD0_TypeDefinitionIndex)->GetStaticField(0xEC84);
	}
	static ::System::Int32* StaticGet_Field_1_6()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1DC99F3008D2ACD0_TypeDefinitionIndex)->GetStaticField(0xEC88);
	}
	static ::System::Int32* StaticGet_Field_1_10()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1DC99F3008D2ACD0_TypeDefinitionIndex)->GetStaticField(0xEC8C);
	}
	static ::System::Int32* StaticGet_Field_1_4()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1DC99F3008D2ACD0_TypeDefinitionIndex)->GetStaticField(0xEC90);
	}
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1DC99F3008D2ACD0_TypeDefinitionIndex)->GetStaticField(0xEC94);
	}
	static ::System::Int32* StaticGet_Field_1_12()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1DC99F3008D2ACD0_TypeDefinitionIndex)->GetStaticField(0xEC98);
	}
	static ::System::Int32* StaticGet_Field_1_5()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1DC99F3008D2ACD0_TypeDefinitionIndex)->GetStaticField(0xEC9C);
	}
	static ::System::Int32* StaticGet_Field_1_9()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1DC99F3008D2ACD0_TypeDefinitionIndex)->GetStaticField(0xECA0);
	}
	static ::System::Int32* StaticGet_Field_1_8()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1DC99F3008D2ACD0_TypeDefinitionIndex)->GetStaticField(0xECA4);
	}
	static ::System::Int32* StaticGet_Field_1_7()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1DC99F3008D2ACD0_TypeDefinitionIndex)->GetStaticField(0xECA8);
	}
	static ::System::Int32* StaticGet_Field_1_3()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1DC99F3008D2ACD0_TypeDefinitionIndex)->GetStaticField(0xECAC);
	}
	// static const ::System::String* Field_1_1; // 0x0
	::System::Collections::Generic::List_1<::Class_1_1DC99F3008D2ACD0_Struct_2_E81A211B6662113C>* Field_1_16; // 0x10
	::UnityEngine::ComputeBuffer* Field_1_35; // 0x18
	::Class_1_1DC99F3008D2ACD0_Class_1_536C40F101440DEA* Field_1_14; // 0x20
	::System::Collections::Generic::List_1<::Class_1_1DC99F3008D2ACD0_Struct_2_B94BC0827717B30A>* Field_1_23; // 0x28
	::UnityEngine::Rendering::CommandBuffer* Field_1_34; // 0x30
	::UnityEngine::ComputeBuffer* Field_1_27; // 0x38
	::Cysharp::Threading::Tasks::UniTask Field_1_17; // 0x40
	::UnityEngine::ComputeShader* Field_1_31; // 0x50
	::UnityEngine::ComputeBuffer* Field_1_29; // 0x58
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_24; // 0x60
	::UnityEngine::Mesh* Field_1_36; // 0x68
	::UnityEngine::ComputeBuffer* Field_1_30; // 0x70
	::Il2CppArray<::UnityEngine::Vector4>* Field_1_22; // 0x78
	::System::Threading::CancellationTokenSource* Field_1_19; // 0x80
	::Class_1_1DC99F3008D2ACD0_Class_1_536C40F101440DEA* Field_1_13; // 0x88
	::System::Collections::Generic::Dictionary_2<::MoleMole::MonoDynamicObjectVoxel*, ::System::Int32>* Field_1_25; // 0x90
	::UnityEngine::ComputeBuffer* Field_1_26; // 0x98
	::Il2CppArray<::System::UInt32>* Field_1_38; // 0xA0
	::UnityEngine::ComputeBuffer* Field_1_28; // 0xA8
	::System::Collections::Generic::List_1<::UnityEngine::Vector3Int>* Field_1_15; // 0xB0
	::UnityEngine::ComputeBuffer* Field_1_37; // 0xB8
	::System::Int32 Field_1_32; // 0xC0
	::System::Int32 Field_1_33; // 0xC4
	::UnityEngine::Vector3 Field_1_21; // 0xC8
	::System::Boolean Field_1_39; // 0xD4
	::System::Boolean Field_1_40; // 0xD5
	::System::Boolean Field_1_18; // 0xD6
	::UnityEngine::Vector3 Field_1_20; // 0xD8

	::System::Void _ctor(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::ComputeShader* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::ComputeShader*))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0__CCTOR_OFFSET))();
	}

	::System::Void Method_1_D77C7F36877B6EE1(::MoleMole::MonoDynamicObjectVoxel* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoDynamicObjectVoxel*))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_METHOD_1_D77C7F36877B6EE1_OFFSET))(this, a1);
	}

	::System::Void Method_1_96A53A17AC5D0E93()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_METHOD_1_96A53A17AC5D0E93_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_1_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_METHOD_1_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_9C3D8ED2211D368B(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_METHOD_1_9C3D8ED2211D368B_OFFSET))(this, a1);
	}

	::System::Void Method_1_3CDF8B860E4357D4(::Class_1_1DC99F3008D2ACD0_Class_1_536C40F101440DEA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1DC99F3008D2ACD0_Class_1_536C40F101440DEA*))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_METHOD_1_3CDF8B860E4357D4_OFFSET))(this, a1);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_9C3D8ED2211D368B_1(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_METHOD_1_9C3D8ED2211D368B_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_2EC46FA4229F9341(::UnityEngine::ComputeBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_METHOD_1_2EC46FA4229F9341_OFFSET))(this, a1);
	}

	static ::MoleMole::Vector2Int Method_1_0A184EE642E607E1(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::MoleMole::Vector2Int(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_METHOD_1_0A184EE642E607E1_OFFSET))(a1, a2);
	}

	::System::Boolean Method_1_D65B70E08ED7E38A(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Byte& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Byte&))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_METHOD_1_D65B70E08ED7E38A_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_METHOD_1_2450CFC043E97F54_OFFSET))(this);
	}

	::System::Void Method_1_4ECE13C71D259CF7(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_METHOD_1_4ECE13C71D259CF7_OFFSET))(this, a1, a2, a3);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_3D4CEC1B38D5DF24(::UnityEngine::Vector3Int a1, ::System::Boolean a2, ::System::Threading::CancellationToken a3)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::UnityEngine::Vector3Int, ::System::Boolean, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_METHOD_1_3D4CEC1B38D5DF24_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_METHOD_1_33ACA6CB2ABC73F7_1_OFFSET))(this);
	}

	::System::Void Method_1_AAFE5309A4703271(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_METHOD_1_AAFE5309A4703271_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::ComputeBuffer* Method_1_50DD3D69824E112C()
	{
		return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_METHOD_1_50DD3D69824E112C_OFFSET))(this);
	}

	::System::Void Method_1_2EC46FA4229F9341_1(::UnityEngine::ComputeBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_METHOD_1_2EC46FA4229F9341_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_B9A97467188E4B69()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_METHOD_1_B9A97467188E4B69_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_3F270119FDAA4E2D(::UnityEngine::Vector3Int a1, ::System::Threading::CancellationToken a2)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::UnityEngine::Vector3Int, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_METHOD_1_3F270119FDAA4E2D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F0C8024E35DC873C(::UnityEngine::Mesh* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_METHOD_1_F0C8024E35DC873C_OFFSET))(this, a1);
	}

	static ::MoleMole::Vector2Int Method_1_0A184EE642E607E1_1(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::MoleMole::Vector2Int(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_METHOD_1_0A184EE642E607E1_1_OFFSET))(a1, a2);
	}

	::UnityEngine::ComputeBuffer* Method_1_50DD3D69824E112C_1()
	{
		return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_METHOD_1_50DD3D69824E112C_1_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_1_9CD144BB0A106E3F(::MoleMole::MonoDynamicObjectVoxel* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoDynamicObjectVoxel*))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_METHOD_1_9CD144BB0A106E3F_OFFSET))(this, a1);
	}

	::UnityEngine::Mesh* Method_1_55B5469E48145079()
	{
		return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_METHOD_1_55B5469E48145079_OFFSET))(this);
	}
};
