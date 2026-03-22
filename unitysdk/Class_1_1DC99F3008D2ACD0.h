#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1DC99F3008D2ACD0_Struct_2_B94BC0827717B30A.h"
#include "unitysdk/Class_1_1DC99F3008D2ACD0_Struct_2_E81A211B6662113C_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector3Int.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_1DC99F3008D2ACD0_Class_1_1DB1D3BB5258B354;
namespace MoleMole { class MonoDynamicObjectVoxel; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class CancellationTokenSource; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define CLASS_1_1DC99F3008D2ACD0_METHOD_1_0A184EE642E607E1_1_OFFSET UNITYSDK_OFFSET(0x8DB6BD0)
#define CLASS_1_1DC99F3008D2ACD0_METHOD_1_0A184EE642E607E1_OFFSET UNITYSDK_OFFSET(0x8DB52D0)
#define CLASS_1_1DC99F3008D2ACD0_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x8DB49A0)
#define CLASS_1_1DC99F3008D2ACD0_METHOD_1_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x8DB4A30)
#define CLASS_1_1DC99F3008D2ACD0_METHOD_1_2EC46FA4229F9341_1_OFFSET UNITYSDK_OFFSET(0x8DB7890)
#define CLASS_1_1DC99F3008D2ACD0_METHOD_1_2EC46FA4229F9341_OFFSET UNITYSDK_OFFSET(0x8DB4AB0)
#define CLASS_1_1DC99F3008D2ACD0_METHOD_1_33ACA6CB2ABC73F7_1_OFFSET UNITYSDK_OFFSET(0x8DB6E20)
#define CLASS_1_1DC99F3008D2ACD0_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x8DB5520)
#define CLASS_1_1DC99F3008D2ACD0_METHOD_1_3CDF8B860E4357D4_OFFSET UNITYSDK_OFFSET(0x8DB6060)
#define CLASS_1_1DC99F3008D2ACD0_METHOD_1_3D4CEC1B38D5DF24_OFFSET UNITYSDK_OFFSET(0x8DB5350)
#define CLASS_1_1DC99F3008D2ACD0_METHOD_1_3F270119FDAA4E2D_OFFSET UNITYSDK_OFFSET(0x8DB6D30)
#define CLASS_1_1DC99F3008D2ACD0_METHOD_1_4ECE13C71D259CF7_OFFSET UNITYSDK_OFFSET(0x8DB6F20)
#define CLASS_1_1DC99F3008D2ACD0_METHOD_1_50DD3D69824E112C_1_OFFSET UNITYSDK_OFFSET(0x8DB6D20)
#define CLASS_1_1DC99F3008D2ACD0_METHOD_1_50DD3D69824E112C_OFFSET UNITYSDK_OFFSET(0x8DB4AA0)
#define CLASS_1_1DC99F3008D2ACD0_METHOD_1_55B5469E48145079_OFFSET UNITYSDK_OFFSET(0x8DB7CA0)
#define CLASS_1_1DC99F3008D2ACD0_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x8DB5F80)
#define CLASS_1_1DC99F3008D2ACD0_METHOD_1_96A53A17AC5D0E93_OFFSET UNITYSDK_OFFSET(0x8DB44C0)
#define CLASS_1_1DC99F3008D2ACD0_METHOD_1_9C3D8ED2211D368B_1_OFFSET UNITYSDK_OFFSET(0x8DB6C50)
#define CLASS_1_1DC99F3008D2ACD0_METHOD_1_9C3D8ED2211D368B_OFFSET UNITYSDK_OFFSET(0x8DB4AC0)
#define CLASS_1_1DC99F3008D2ACD0_METHOD_1_9CD144BB0A106E3F_OFFSET UNITYSDK_OFFSET(0x8DB7320)
#define CLASS_1_1DC99F3008D2ACD0_METHOD_1_AAFE5309A4703271_OFFSET UNITYSDK_OFFSET(0x8DB78A0)
#define CLASS_1_1DC99F3008D2ACD0_METHOD_1_B9A97467188E4B69_OFFSET UNITYSDK_OFFSET(0x8DB5660)
#define CLASS_1_1DC99F3008D2ACD0_METHOD_1_D65B70E08ED7E38A_OFFSET UNITYSDK_OFFSET(0x8DB7CB0)
#define CLASS_1_1DC99F3008D2ACD0_METHOD_1_D77C7F36877B6EE1_OFFSET UNITYSDK_OFFSET(0x8DB4B80)
#define CLASS_1_1DC99F3008D2ACD0_METHOD_1_F0C8024E35DC873C_OFFSET UNITYSDK_OFFSET(0x8DB6050)
#define CLASS_1_1DC99F3008D2ACD0_METHOD_1_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0x8DB5470)
#define CLASS_1_1DC99F3008D2ACD0__CCTOR_OFFSET UNITYSDK_OFFSET(0x8DB43B0)
#define CLASS_1_1DC99F3008D2ACD0__CTOR_OFFSET UNITYSDK_OFFSET(0x8DB3D40)

inline static constexpr unsigned int Class_1_1DC99F3008D2ACD0_TypeDefinitionIndex = 36680;

class Class_1_1DC99F3008D2ACD0 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_4()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1DC99F3008D2ACD0_TypeDefinitionIndex)->GetStaticField(0xD100);
	}
	static ::System::Int32* StaticGet_Field_1_10()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1DC99F3008D2ACD0_TypeDefinitionIndex)->GetStaticField(0xD104);
	}
	static ::System::Int32* StaticGet_Field_1_9()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1DC99F3008D2ACD0_TypeDefinitionIndex)->GetStaticField(0xD108);
	}
	static ::System::Int32* StaticGet_Field_1_7()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1DC99F3008D2ACD0_TypeDefinitionIndex)->GetStaticField(0xD10C);
	}
	static ::System::Int32* StaticGet_Field_1_8()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1DC99F3008D2ACD0_TypeDefinitionIndex)->GetStaticField(0xD110);
	}
	static ::System::Int32* StaticGet_Field_1_3()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1DC99F3008D2ACD0_TypeDefinitionIndex)->GetStaticField(0xD114);
	}
	static ::System::Int32* StaticGet_Field_1_5()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1DC99F3008D2ACD0_TypeDefinitionIndex)->GetStaticField(0xD118);
	}
	static ::System::Int32* StaticGet_Field_1_6()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1DC99F3008D2ACD0_TypeDefinitionIndex)->GetStaticField(0xD11C);
	}
	static ::System::Int32* StaticGet_Field_1_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1DC99F3008D2ACD0_TypeDefinitionIndex)->GetStaticField(0xD120);
	}
	static ::System::Int32* StaticGet_Field_1_11()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1DC99F3008D2ACD0_TypeDefinitionIndex)->GetStaticField(0xD124);
	}
	static ::System::Int32* StaticGet_Field_1_12()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1DC99F3008D2ACD0_TypeDefinitionIndex)->GetStaticField(0xD128);
	}
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1DC99F3008D2ACD0_TypeDefinitionIndex)->GetStaticField(0xD12C);
	}
	// static const ::System::String* Field_1_1; // 0x0
	::UnityEngine::ComputeBuffer* Field_1_29; // 0x10
	::UnityEngine::ComputeBuffer* Field_1_37; // 0x18
	::UnityEngine::ComputeBuffer* Field_1_26; // 0x20
	::UnityEngine::ComputeBuffer* Field_1_27; // 0x28
	::Il2CppArray<::UnityEngine::Vector4>* Field_1_22; // 0x30
	::Class_1_1DC99F3008D2ACD0_Class_1_1DB1D3BB5258B354* Field_1_13; // 0x38
	::System::Collections::Generic::List_1<::UnityEngine::Vector3Int>* Field_1_15; // 0x40
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_24; // 0x48
	::UnityEngine::Mesh* Field_1_36; // 0x50
	::Class_1_1DC99F3008D2ACD0_Class_1_1DB1D3BB5258B354* Field_1_14; // 0x58
	::UnityEngine::ComputeBuffer* Field_1_28; // 0x60
	::UnityEngine::Rendering::CommandBuffer* Field_1_34; // 0x68
	::UnityEngine::ComputeBuffer* Field_1_30; // 0x70
	::System::Collections::Generic::Dictionary_2<::MoleMole::MonoDynamicObjectVoxel*, ::System::Int32>* Field_1_25; // 0x78
	::UnityEngine::ComputeBuffer* Field_1_35; // 0x80
	::Cysharp::Threading::Tasks::UniTask Field_1_17; // 0x88
	::System::Threading::CancellationTokenSource* Field_1_19; // 0x98
	::System::Collections::Generic::List_1<::Class_1_1DC99F3008D2ACD0_Struct_2_E81A211B6662113C_1>* Field_1_16; // 0xA0
	::Il2CppArray<::System::UInt32>* Field_1_38; // 0xA8
	::UnityEngine::ComputeShader* Field_1_31; // 0xB0
	::System::Collections::Generic::List_1<::Class_1_1DC99F3008D2ACD0_Struct_2_B94BC0827717B30A>* Field_1_23; // 0xB8
	::System::Boolean Field_1_18; // 0xC0
	::System::Boolean Field_1_40; // 0xC1
	::System::Boolean Field_1_39; // 0xC2
	::System::Int32 Field_1_33; // 0xC4
	::UnityEngine::Vector3 Field_1_20; // 0xC8
	::UnityEngine::Vector3 Field_1_21; // 0xD4
	::System::Int32 Field_1_32; // 0xE0

	::System::Void _ctor(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::ComputeShader* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::ComputeShader*))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0__CCTOR_OFFSET))();
	}

	::System::Void Method_1_96A53A17AC5D0E93()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_METHOD_1_96A53A17AC5D0E93_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_1_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_METHOD_1_2450CFC043E97F54_OFFSET))(this);
	}

	::UnityEngine::ComputeBuffer* Method_1_50DD3D69824E112C()
	{
		return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_METHOD_1_50DD3D69824E112C_OFFSET))(this);
	}

	::System::Void Method_1_2EC46FA4229F9341(::UnityEngine::ComputeBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_METHOD_1_2EC46FA4229F9341_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_9C3D8ED2211D368B(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_METHOD_1_9C3D8ED2211D368B_OFFSET))(this, a1);
	}

	::System::Void Method_1_D77C7F36877B6EE1(::MoleMole::MonoDynamicObjectVoxel* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoDynamicObjectVoxel*))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_METHOD_1_D77C7F36877B6EE1_OFFSET))(this, a1);
	}

	static ::MoleMole::Vector2Int Method_1_0A184EE642E607E1(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::MoleMole::Vector2Int(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_METHOD_1_0A184EE642E607E1_OFFSET))(a1, a2);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_3D4CEC1B38D5DF24(::UnityEngine::Vector3Int a1, ::System::Boolean a2, ::System::Threading::CancellationToken a3)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::UnityEngine::Vector3Int, ::System::Boolean, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_METHOD_1_3D4CEC1B38D5DF24_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_METHOD_1_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_1_B9A97467188E4B69()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_METHOD_1_B9A97467188E4B69_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_1_F0C8024E35DC873C(::UnityEngine::Mesh* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_METHOD_1_F0C8024E35DC873C_OFFSET))(this, a1);
	}

	::System::Void Method_1_3CDF8B860E4357D4(::Class_1_1DC99F3008D2ACD0_Class_1_1DB1D3BB5258B354* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1DC99F3008D2ACD0_Class_1_1DB1D3BB5258B354*))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_METHOD_1_3CDF8B860E4357D4_OFFSET))(this, a1);
	}

	static ::MoleMole::Vector2Int Method_1_0A184EE642E607E1_1(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::MoleMole::Vector2Int(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_METHOD_1_0A184EE642E607E1_1_OFFSET))(a1, a2);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_9C3D8ED2211D368B_1(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_METHOD_1_9C3D8ED2211D368B_1_OFFSET))(this, a1);
	}

	::UnityEngine::ComputeBuffer* Method_1_50DD3D69824E112C_1()
	{
		return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_METHOD_1_50DD3D69824E112C_1_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_3F270119FDAA4E2D(::UnityEngine::Vector3Int a1, ::System::Threading::CancellationToken a2)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::UnityEngine::Vector3Int, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_METHOD_1_3F270119FDAA4E2D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_METHOD_1_33ACA6CB2ABC73F7_1_OFFSET))(this);
	}

	::System::Void Method_1_4ECE13C71D259CF7(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_METHOD_1_4ECE13C71D259CF7_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_9CD144BB0A106E3F(::MoleMole::MonoDynamicObjectVoxel* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoDynamicObjectVoxel*))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_METHOD_1_9CD144BB0A106E3F_OFFSET))(this, a1);
	}

	::System::Void Method_1_2EC46FA4229F9341_1(::UnityEngine::ComputeBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_METHOD_1_2EC46FA4229F9341_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_AAFE5309A4703271(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_METHOD_1_AAFE5309A4703271_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Mesh* Method_1_55B5469E48145079()
	{
		return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_METHOD_1_55B5469E48145079_OFFSET))(this);
	}

	::System::Boolean Method_1_D65B70E08ED7E38A(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Byte& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Byte&))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_METHOD_1_D65B70E08ED7E38A_OFFSET))(this, a1, a2, a3, a4);
	}
};
