#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A1E89FB9F8D4C62E.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_3E2902AE141B8B89;
namespace MoleMole { class MonoPhotoWallEdge; }
namespace MoleMole::Config { class ConfigPhotoWall; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Rendering::Universal::Internal { class OutlineObjectRenderer; }

#define CLASS_1_F318577A009C0A6E_METHOD_1_1E13A8A5C0FF7D62_OFFSET UNITYSDK_OFFSET(0xAA394B0)
#define CLASS_1_F318577A009C0A6E_METHOD_1_3E9CD81E66CB28FD_OFFSET UNITYSDK_OFFSET(0xAA3B710)
#define CLASS_1_F318577A009C0A6E_METHOD_1_413F493333BF3391_OFFSET UNITYSDK_OFFSET(0xAA39AE0)
#define CLASS_1_F318577A009C0A6E_METHOD_1_43E6D08197AA9CDD_OFFSET UNITYSDK_OFFSET(0xAA3B570)
#define CLASS_1_F318577A009C0A6E_METHOD_1_4B8E7FCFC2DC04FB_OFFSET UNITYSDK_OFFSET(0xAA3A630)
#define CLASS_1_F318577A009C0A6E_METHOD_1_4F9929DB42A2989B_1_OFFSET UNITYSDK_OFFSET(0xAA3B0A0)
#define CLASS_1_F318577A009C0A6E_METHOD_1_4F9929DB42A2989B_OFFSET UNITYSDK_OFFSET(0xAA39800)
#define CLASS_1_F318577A009C0A6E_METHOD_1_5B0743536553688C_OFFSET UNITYSDK_OFFSET(0xAA394A0)
#define CLASS_1_F318577A009C0A6E_METHOD_1_5CF270C2E7C8B828_OFFSET UNITYSDK_OFFSET(0xAA3A250)
#define CLASS_1_F318577A009C0A6E_METHOD_1_80B35FDAEB7143D4_OFFSET UNITYSDK_OFFSET(0xAA3A840)
#define CLASS_1_F318577A009C0A6E_METHOD_1_9628185997A5A39F_OFFSET UNITYSDK_OFFSET(0xAA39CB0)
#define CLASS_1_F318577A009C0A6E_METHOD_1_9CA5A80F6B5B9E01_OFFSET UNITYSDK_OFFSET(0xAA3B070)
#define CLASS_1_F318577A009C0A6E_METHOD_1_A8EBB58952AD6E9F_OFFSET UNITYSDK_OFFSET(0xAA3A050)
#define CLASS_1_F318577A009C0A6E_METHOD_1_AC6A5C5C2E0664AA_OFFSET UNITYSDK_OFFSET(0xAA3AE00)
#define CLASS_1_F318577A009C0A6E_METHOD_1_AC762F67FADB2CA3_OFFSET UNITYSDK_OFFSET(0xAA3B700)
#define CLASS_1_F318577A009C0A6E_METHOD_1_C32CC33BF0371575_OFFSET UNITYSDK_OFFSET(0xAA3B4D0)
#define CLASS_1_F318577A009C0A6E_METHOD_1_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0xAA3B080)
#define CLASS_1_F318577A009C0A6E_METHOD_1_E4B4A3F40157A79A_OFFSET UNITYSDK_OFFSET(0xAA3B360)
#define CLASS_1_F318577A009C0A6E_METHOD_1_E95A4606AAD9C63C_OFFSET UNITYSDK_OFFSET(0xAA39AF0)
#define CLASS_1_F318577A009C0A6E__CTOR_OFFSET UNITYSDK_OFFSET(0xAA39490)

inline static constexpr unsigned int Class_1_F318577A009C0A6E_TypeDefinitionIndex = 39415;

class Class_1_F318577A009C0A6E : public ::System::Object
{
public:
	// static const ::System::Boolean Field_1_0; // 0x0
	::UnityEngine::GameObject* Field_1_6; // 0x10
	::UnityEngine::Rendering::Universal::Internal::OutlineObjectRenderer* Field_1_7; // 0x18
	::Foundation::AssetPath Field_1_2; // 0x20
	::MoleMole::MonoPhotoWallEdge* Field_1_8; // 0x30
	::System::Action_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>* Field_1_4; // 0x38
	::Foundation::AssetPath Field_1_1; // 0x40
	::Foundation::AssetPath Field_1_3; // 0x50
	::UnityEngine::Quaternion Field_1_9; // 0x60
	::UnityEngine::Vector3 Field_1_5; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F318577A009C0A6E__CTOR_OFFSET))(this);
	}

	::Foundation::AssetPath Method_1_5B0743536553688C()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F318577A009C0A6E_METHOD_1_5B0743536553688C_OFFSET))(this);
	}

	::System::Void Method_1_1E13A8A5C0FF7D62()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F318577A009C0A6E_METHOD_1_1E13A8A5C0FF7D62_OFFSET))(this);
	}

	::System::Boolean Method_1_4F9929DB42A2989B(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Quaternion& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_1_F318577A009C0A6E_METHOD_1_4F9929DB42A2989B_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::Quaternion Method_1_413F493333BF3391()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F318577A009C0A6E_METHOD_1_413F493333BF3391_OFFSET))(this);
	}

	::System::Void Method_1_E95A4606AAD9C63C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F318577A009C0A6E_METHOD_1_E95A4606AAD9C63C_OFFSET))(this, a1);
	}

	::System::Void Method_1_9628185997A5A39F(::Foundation::AssetPath a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::System::Action_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Action_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + CLASS_1_F318577A009C0A6E_METHOD_1_9628185997A5A39F_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_5CF270C2E7C8B828(::UnityEngine::Plane& a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Plane&, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F318577A009C0A6E_METHOD_1_5CF270C2E7C8B828_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_4B8E7FCFC2DC04FB(::UnityEngine::GameObject* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_F318577A009C0A6E_METHOD_1_4B8E7FCFC2DC04FB_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_80B35FDAEB7143D4(::UnityEngine::Ray a1, ::Class_1_F318577A009C0A6E* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Ray, ::Class_1_F318577A009C0A6E*))((::PBYTE)hIl2Cpp + CLASS_1_F318577A009C0A6E_METHOD_1_80B35FDAEB7143D4_OFFSET))(this, a1, a2);
	}

	::UnityEngine::GameObject* Method_1_9CA5A80F6B5B9E01()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F318577A009C0A6E_METHOD_1_9CA5A80F6B5B9E01_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F318577A009C0A6E_METHOD_1_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::System::Void Method_1_A8EBB58952AD6E9F(::Foundation::AssetPath a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_F318577A009C0A6E_METHOD_1_A8EBB58952AD6E9F_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_4F9929DB42A2989B_1(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Quaternion& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_1_F318577A009C0A6E_METHOD_1_4F9929DB42A2989B_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_E4B4A3F40157A79A(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_F318577A009C0A6E_METHOD_1_E4B4A3F40157A79A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_43E6D08197AA9CDD(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_F318577A009C0A6E_METHOD_1_43E6D08197AA9CDD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_AC762F67FADB2CA3(::Foundation::AssetPath a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + CLASS_1_F318577A009C0A6E_METHOD_1_AC762F67FADB2CA3_OFFSET))(this, a1);
	}

	::Class_1_3E2902AE141B8B89* Method_1_AC6A5C5C2E0664AA(::Class_1_F318577A009C0A6E* a1)
	{
		return ((::Class_1_3E2902AE141B8B89*(*)(::PVOID, ::Class_1_F318577A009C0A6E*))((::PBYTE)hIl2Cpp + CLASS_1_F318577A009C0A6E_METHOD_1_AC6A5C5C2E0664AA_OFFSET))(this, a1);
	}

	::System::Void Method_1_C32CC33BF0371575(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_F318577A009C0A6E_METHOD_1_C32CC33BF0371575_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3E9CD81E66CB28FD(::Enum_3_A1E89FB9F8D4C62E a1, ::MoleMole::Config::ConfigPhotoWall* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_A1E89FB9F8D4C62E, ::MoleMole::Config::ConfigPhotoWall*))((::PBYTE)hIl2Cpp + CLASS_1_F318577A009C0A6E_METHOD_1_3E9CD81E66CB28FD_OFFSET))(this, a1, a2);
	}
};
