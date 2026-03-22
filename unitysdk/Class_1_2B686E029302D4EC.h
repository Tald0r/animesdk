#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2B686E029302D4EC_Enum_3_E77CA70DD180A8DC.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/UIHollowChessPieceParticle_AttachPointType.h"
#include "unitysdk/Struct_2_6E23A591AC26A31E.h"
#include "unitysdk/Struct_2_AE36917A57939791.h"
#include "unitysdk/Struct_2_FD11E06FCEBA5113.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_4ADEE7902DEBF73B;
namespace MoleMole { class IVideoPlayer; }
namespace MoleMole { class UIHollowChessPieceEffectAttachPoint; }
namespace MoleMole::Config { class ConfigHollowChessboard; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture; }
namespace UnityEngine { class Transform; }

#define CLASS_1_2B686E029302D4EC_DESTRUCTOR_OFFSET UNITYSDK_OFFSET(0x8EC21D0)
#define CLASS_1_2B686E029302D4EC_METHOD_1_0A4CFF6A49A6D182_OFFSET UNITYSDK_OFFSET(0x8EC25A0)
#define CLASS_1_2B686E029302D4EC_METHOD_1_10FA676DA614CC70_OFFSET UNITYSDK_OFFSET(0x8EC2FB0)
#define CLASS_1_2B686E029302D4EC_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x8EC7970)
#define CLASS_1_2B686E029302D4EC_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x8EC79A0)
#define CLASS_1_2B686E029302D4EC_METHOD_1_21631744E68FDB6A_OFFSET UNITYSDK_OFFSET(0x8EC7980)
#define CLASS_1_2B686E029302D4EC_METHOD_1_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x8EC7B00)
#define CLASS_1_2B686E029302D4EC_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x8EC2E10)
#define CLASS_1_2B686E029302D4EC_METHOD_1_4A4515201D6864D6_OFFSET UNITYSDK_OFFSET(0x8EC7D20)
#define CLASS_1_2B686E029302D4EC_METHOD_1_4BD2BFB48FF90060_OFFSET UNITYSDK_OFFSET(0x8EC8240)
#define CLASS_1_2B686E029302D4EC_METHOD_1_4D10873DB5CC58E4_OFFSET UNITYSDK_OFFSET(0x8EC2850)
#define CLASS_1_2B686E029302D4EC_METHOD_1_5271722C10B0842D_OFFSET UNITYSDK_OFFSET(0x8EC7750)
#define CLASS_1_2B686E029302D4EC_METHOD_1_6105334A729F22E3_OFFSET UNITYSDK_OFFSET(0x8EC7C70)
#define CLASS_1_2B686E029302D4EC_METHOD_1_752471840F8BFE78_OFFSET UNITYSDK_OFFSET(0x8EC2B30)
#define CLASS_1_2B686E029302D4EC_METHOD_1_7AA2D3F854EBC0E0_OFFSET UNITYSDK_OFFSET(0x8EC2E70)
#define CLASS_1_2B686E029302D4EC_METHOD_1_8B20DD98E594CC7F_OFFSET UNITYSDK_OFFSET(0x8EC7A60)
#define CLASS_1_2B686E029302D4EC_METHOD_1_9CA5A80F6B5B9E01_OFFSET UNITYSDK_OFFSET(0x8EC2F90)
#define CLASS_1_2B686E029302D4EC_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x8EC8100)
#define CLASS_1_2B686E029302D4EC_METHOD_1_B59CD6E733FA1F5C_OFFSET UNITYSDK_OFFSET(0x8EC2860)
#define CLASS_1_2B686E029302D4EC_METHOD_1_B892007B9247C983_OFFSET UNITYSDK_OFFSET(0x8EC2C30)
#define CLASS_1_2B686E029302D4EC_METHOD_1_BAD8EF2429B8CBF3_OFFSET UNITYSDK_OFFSET(0x8EC7D80)
#define CLASS_1_2B686E029302D4EC_METHOD_1_C32CC33BF0371575_OFFSET UNITYSDK_OFFSET(0x8EC24B0)
#define CLASS_1_2B686E029302D4EC_METHOD_1_C7E790C9FF4C9C11_OFFSET UNITYSDK_OFFSET(0x8EC2FA0)
#define CLASS_1_2B686E029302D4EC_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8EC2170)
#define CLASS_1_2B686E029302D4EC_METHOD_1_D1DF5502C4A2301A_OFFSET UNITYSDK_OFFSET(0x8EC76E0)
#define CLASS_1_2B686E029302D4EC_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x8EC2DE0)
#define CLASS_1_2B686E029302D4EC_METHOD_1_D8054E7A69837E92_OFFSET UNITYSDK_OFFSET(0x8EC7A10)
#define CLASS_1_2B686E029302D4EC_METHOD_1_EA4D5B905966BF97_OFFSET UNITYSDK_OFFSET(0x8EC3730)
#define CLASS_1_2B686E029302D4EC_METHOD_1_F978A1D172468895_OFFSET UNITYSDK_OFFSET(0x8EC2250)
#define CLASS_1_2B686E029302D4EC__CCTOR_OFFSET UNITYSDK_OFFSET(0x8EC2540)
#define CLASS_1_2B686E029302D4EC__CTOR_OFFSET UNITYSDK_OFFSET(0x8EC1D10)

inline static constexpr unsigned int Class_1_2B686E029302D4EC_TypeDefinitionIndex = 43342;

class Class_1_2B686E029302D4EC : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_3()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B686E029302D4EC_TypeDefinitionIndex)->GetStaticField(0x41A20);
	}
	static ::UnityEngine::Vector3* StaticGet_Field_1_12()
	{
		return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B686E029302D4EC_TypeDefinitionIndex)->GetStaticField(0x102F0);
	}
	::MoleMole::IVideoPlayer* Field_1_1; // 0x10
	::System::Func_2<::Class_1_2B686E029302D4EC_Enum_3_E77CA70DD180A8DC, ::UnityEngine::RenderTexture*>* Field_1_10; // 0x18
	::UnityEngine::Material* Field_1_7; // 0x20
	::UnityEngine::MeshRenderer* Field_1_5; // 0x28
	::System::Action_2<::System::String*, ::UnityEngine::GameObject*>* Field_1_8; // 0x30
	::UnityEngine::GameObject* Field_1_2; // 0x38
	::System::String* Field_1_0; // 0x40
	::MoleMole::UIHollowChessPieceEffectAttachPoint* Field_1_11; // 0x48
	::UnityEngine::Material* Field_1_6; // 0x50
	::MoleMole::Config::ConfigHollowChessboard* Field_1_9; // 0x58
	::UnityEngine::GameObject* Field_1_4; // 0x60

	::System::Void _ctor(::UnityEngine::GameObject* a1, ::System::String* a2, ::UnityEngine::Transform* a3, ::System::Action_2<::System::String*, ::UnityEngine::GameObject*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*, ::UnityEngine::Transform*, ::System::Action_2<::System::String*, ::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + CLASS_1_2B686E029302D4EC__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B686E029302D4EC__CCTOR_OFFSET))();
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B686E029302D4EC_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Destructor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B686E029302D4EC_DESTRUCTOR_OFFSET))(this);
	}

	::System::Void Method_1_C32CC33BF0371575(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_2B686E029302D4EC_METHOD_1_C32CC33BF0371575_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_0A4CFF6A49A6D182(::Struct_2_AE36917A57939791& a1, ::Struct_2_AE36917A57939791& a2, ::Class_2_4ADEE7902DEBF73B* a3, ::System::Boolean a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_AE36917A57939791&, ::Struct_2_AE36917A57939791&, ::Class_2_4ADEE7902DEBF73B*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2B686E029302D4EC_METHOD_1_0A4CFF6A49A6D182_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_4D10873DB5CC58E4(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_2B686E029302D4EC_METHOD_1_4D10873DB5CC58E4_OFFSET))(this, a1);
	}

	::System::Void Method_1_B59CD6E733FA1F5C(::Struct_2_FD11E06FCEBA5113 a1, ::MoleMole::HollowChessboard::HollowCell a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FD11E06FCEBA5113, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_2B686E029302D4EC_METHOD_1_B59CD6E733FA1F5C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B892007B9247C983(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2B686E029302D4EC_METHOD_1_B892007B9247C983_OFFSET))(this, a1);
	}

	::System::Void Method_1_F978A1D172468895()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B686E029302D4EC_METHOD_1_F978A1D172468895_OFFSET))(this);
	}

	::System::Void Method_1_7AA2D3F854EBC0E0(::UnityEngine::Texture* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + CLASS_1_2B686E029302D4EC_METHOD_1_7AA2D3F854EBC0E0_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_1_9CA5A80F6B5B9E01()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B686E029302D4EC_METHOD_1_9CA5A80F6B5B9E01_OFFSET))(this);
	}

	::MoleMole::IVideoPlayer* Method_1_C7E790C9FF4C9C11()
	{
		return ((::MoleMole::IVideoPlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B686E029302D4EC_METHOD_1_C7E790C9FF4C9C11_OFFSET))(this);
	}

	::System::Void Method_1_10FA676DA614CC70(::Struct_2_6E23A591AC26A31E& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_6E23A591AC26A31E&))((::PBYTE)hIl2Cpp + CLASS_1_2B686E029302D4EC_METHOD_1_10FA676DA614CC70_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_EA4D5B905966BF97(::Struct_2_6E23A591AC26A31E& a1, ::Struct_2_6E23A591AC26A31E& a2, ::Class_2_4ADEE7902DEBF73B* a3, ::System::Boolean a4, ::MoleMole::HollowChessboard::HollowCell a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_6E23A591AC26A31E&, ::Struct_2_6E23A591AC26A31E&, ::Class_2_4ADEE7902DEBF73B*, ::System::Boolean, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_2B686E029302D4EC_METHOD_1_EA4D5B905966BF97_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B686E029302D4EC_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_752471840F8BFE78(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::MoleMole::HollowChessboard::HollowCell a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_2B686E029302D4EC_METHOD_1_752471840F8BFE78_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_D1DF5502C4A2301A(::System::Func_2<::Class_1_2B686E029302D4EC_Enum_3_E77CA70DD180A8DC, ::UnityEngine::RenderTexture*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_2<::Class_1_2B686E029302D4EC_Enum_3_E77CA70DD180A8DC, ::UnityEngine::RenderTexture*>*))((::PBYTE)hIl2Cpp + CLASS_1_2B686E029302D4EC_METHOD_1_D1DF5502C4A2301A_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_1_5271722C10B0842D(::MoleMole::UIHollowChessPieceParticle_AttachPointType a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::MoleMole::UIHollowChessPieceParticle_AttachPointType))((::PBYTE)hIl2Cpp + CLASS_1_2B686E029302D4EC_METHOD_1_5271722C10B0842D_OFFSET))(this, a1);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B686E029302D4EC_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B686E029302D4EC_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_1_21631744E68FDB6A()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B686E029302D4EC_METHOD_1_21631744E68FDB6A_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B686E029302D4EC_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::UnityEngine::Quaternion Method_1_D8054E7A69837E92()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B686E029302D4EC_METHOD_1_D8054E7A69837E92_OFFSET))(this);
	}

	::System::Void Method_1_8B20DD98E594CC7F(::UnityEngine::Quaternion a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_2B686E029302D4EC_METHOD_1_8B20DD98E594CC7F_OFFSET))(this, a1);
	}

	::System::Void Method_1_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B686E029302D4EC_METHOD_1_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_1_6105334A729F22E3(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_2B686E029302D4EC_METHOD_1_6105334A729F22E3_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_4A4515201D6864D6()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B686E029302D4EC_METHOD_1_4A4515201D6864D6_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_1_BAD8EF2429B8CBF3()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B686E029302D4EC_METHOD_1_BAD8EF2429B8CBF3_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B686E029302D4EC_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_4BD2BFB48FF90060(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2B686E029302D4EC_METHOD_1_4BD2BFB48FF90060_OFFSET))(this, a1);
	}
};
