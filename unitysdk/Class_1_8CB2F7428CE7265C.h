#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_494697B4AB731572_Enum_3_7027F8F289F82CE3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_8CB2F7428CE7265C_Class_3_04DD801C115024F2;
class Class_1_8CB2F7428CE7265C_Class_3_C6F994AA46CF31A2;
namespace MoleMole { class CameraModuleAvatarDataConfigExt; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class SphereCollider; }

#define CLASS_1_8CB2F7428CE7265C_METHOD_1_31A6A1A07653D1D2_OFFSET UNITYSDK_OFFSET(0xC5664F0)
#define CLASS_1_8CB2F7428CE7265C_METHOD_1_3BBF367E911FF8D6_OFFSET UNITYSDK_OFFSET(0xC565D00)
#define CLASS_1_8CB2F7428CE7265C_METHOD_1_47442C2BE57F201C_OFFSET UNITYSDK_OFFSET(0xC567230)
#define CLASS_1_8CB2F7428CE7265C_METHOD_1_6671F1CF091A0296_OFFSET UNITYSDK_OFFSET(0xC567400)
#define CLASS_1_8CB2F7428CE7265C_METHOD_1_67435DAD33814C40_OFFSET UNITYSDK_OFFSET(0xC5659F0)
#define CLASS_1_8CB2F7428CE7265C_METHOD_1_C71920165E08B0A2_OFFSET UNITYSDK_OFFSET(0xC564F90)
#define CLASS_1_8CB2F7428CE7265C_METHOD_1_F911478D6AC45A79_OFFSET UNITYSDK_OFFSET(0xC5671D0)
#define CLASS_1_8CB2F7428CE7265C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC564F20)

inline static constexpr unsigned int Class_1_8CB2F7428CE7265C_TypeDefinitionIndex = 49084;

class Class_1_8CB2F7428CE7265C : public ::System::Object
{
public:
	static ::UnityEngine::GameObject** StaticGet_Field_1_3()
	{
		return (::UnityEngine::GameObject**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8CB2F7428CE7265C_TypeDefinitionIndex)->GetStaticField(0x47270);
	}
	static ::Il2CppArray<::System::Int32>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8CB2F7428CE7265C_TypeDefinitionIndex)->GetStaticField(0x47278);
	}
	static ::UnityEngine::SphereCollider** StaticGet_Field_1_2()
	{
		return (::UnityEngine::SphereCollider**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8CB2F7428CE7265C_TypeDefinitionIndex)->GetStaticField(0x47280);
	}
	static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8CB2F7428CE7265C_TypeDefinitionIndex)->GetStaticField(0x47288);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8CB2F7428CE7265C__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_C71920165E08B0A2(::UnityEngine::Ray a1, ::UnityEngine::RaycastHit& a2, ::System::Single a3, ::System::Int32 a4, ::Class_1_8CB2F7428CE7265C_Class_3_04DD801C115024F2* a5, ::Class_1_8CB2F7428CE7265C_Class_3_C6F994AA46CF31A2* a6)
	{
		return ((::System::Boolean(*)(::UnityEngine::Ray, ::UnityEngine::RaycastHit&, ::System::Single, ::System::Int32, ::Class_1_8CB2F7428CE7265C_Class_3_04DD801C115024F2*, ::Class_1_8CB2F7428CE7265C_Class_3_C6F994AA46CF31A2*))((::PBYTE)hIl2Cpp + CLASS_1_8CB2F7428CE7265C_METHOD_1_C71920165E08B0A2_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::UnityEngine::SphereCollider* Method_1_67435DAD33814C40()
	{
		return ((::UnityEngine::SphereCollider*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8CB2F7428CE7265C_METHOD_1_67435DAD33814C40_OFFSET))();
	}

	static ::System::Boolean Method_1_3BBF367E911FF8D6(::UnityEngine::Ray a1, ::UnityEngine::RaycastHit& a2, ::System::Single a3, ::System::Int32 a4, ::Class_1_8CB2F7428CE7265C_Class_3_04DD801C115024F2* a5)
	{
		return ((::System::Boolean(*)(::UnityEngine::Ray, ::UnityEngine::RaycastHit&, ::System::Single, ::System::Int32, ::Class_1_8CB2F7428CE7265C_Class_3_04DD801C115024F2*))((::PBYTE)hIl2Cpp + CLASS_1_8CB2F7428CE7265C_METHOD_1_3BBF367E911FF8D6_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Boolean Method_1_31A6A1A07653D1D2(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::UnityEngine::RaycastHit& a4, ::System::Single a5, ::System::Int32 a6, ::Class_1_8CB2F7428CE7265C_Class_3_04DD801C115024F2* a7)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::System::Single, ::System::Int32, ::Class_1_8CB2F7428CE7265C_Class_3_04DD801C115024F2*))((::PBYTE)hIl2Cpp + CLASS_1_8CB2F7428CE7265C_METHOD_1_31A6A1A07653D1D2_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Boolean Method_1_F911478D6AC45A79(::Class_1_494697B4AB731572_Enum_3_7027F8F289F82CE3 a1)
	{
		return ((::System::Boolean(*)(::Class_1_494697B4AB731572_Enum_3_7027F8F289F82CE3))((::PBYTE)hIl2Cpp + CLASS_1_8CB2F7428CE7265C_METHOD_1_F911478D6AC45A79_OFFSET))(a1);
	}

	static ::Class_1_8CB2F7428CE7265C_Class_3_04DD801C115024F2* Method_1_47442C2BE57F201C(::MoleMole::CameraModuleAvatarDataConfigExt*& a1)
	{
		return ((::Class_1_8CB2F7428CE7265C_Class_3_04DD801C115024F2*(*)(::MoleMole::CameraModuleAvatarDataConfigExt*&))((::PBYTE)hIl2Cpp + CLASS_1_8CB2F7428CE7265C_METHOD_1_47442C2BE57F201C_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_6671F1CF091A0296(::UnityEngine::Ray a1, ::UnityEngine::RaycastHit& a2, ::System::Single a3, ::System::Int32 a4, ::Class_1_8CB2F7428CE7265C_Class_3_04DD801C115024F2* a5, ::Class_1_8CB2F7428CE7265C_Class_3_C6F994AA46CF31A2* a6)
	{
		return ((::System::Boolean(*)(::UnityEngine::Ray, ::UnityEngine::RaycastHit&, ::System::Single, ::System::Int32, ::Class_1_8CB2F7428CE7265C_Class_3_04DD801C115024F2*, ::Class_1_8CB2F7428CE7265C_Class_3_C6F994AA46CF31A2*))((::PBYTE)hIl2Cpp + CLASS_1_8CB2F7428CE7265C_METHOD_1_6671F1CF091A0296_OFFSET))(a1, a2, a3, a4, a5, a6);
	}
};
