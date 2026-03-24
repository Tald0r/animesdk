#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/MoleMole/HollowPieceRepresentType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_1B319070EAD6DC38;
class Class_1_7ECB9691B142D586;
class Class_2_62DF67754B2A7986;
namespace MoleMole { class IVideoPlayer; }
namespace MoleMole::Config { class ConfigHollowChessboard; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture; }
namespace UnityEngine { class Transform; }

#define CLASS_1_47DC99B26C6271DB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x716FF60)
#define CLASS_1_47DC99B26C6271DB_METHOD_1_0AE4B11CEAF7377F_1_OFFSET UNITYSDK_OFFSET(0x7171300)
#define CLASS_1_47DC99B26C6271DB_METHOD_1_0AE4B11CEAF7377F_OFFSET UNITYSDK_OFFSET(0x71710F0)
#define CLASS_1_47DC99B26C6271DB_METHOD_1_0F3D3A5ABDA9779E_OFFSET UNITYSDK_OFFSET(0x7170140)
#define CLASS_1_47DC99B26C6271DB_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x7170C20)
#define CLASS_1_47DC99B26C6271DB_METHOD_1_350FBFEA29F2BE5A_OFFSET UNITYSDK_OFFSET(0x7171610)
#define CLASS_1_47DC99B26C6271DB_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x7170F00)
#define CLASS_1_47DC99B26C6271DB_METHOD_1_48F610A66D8B35EB_OFFSET UNITYSDK_OFFSET(0x71714D0)
#define CLASS_1_47DC99B26C6271DB_METHOD_1_7608435D9EAB6CD4_OFFSET UNITYSDK_OFFSET(0x7171070)
#define CLASS_1_47DC99B26C6271DB_METHOD_1_7AB2C887EB34984A_OFFSET UNITYSDK_OFFSET(0x7170F80)
#define CLASS_1_47DC99B26C6271DB_METHOD_1_95780ED94B90ED36_1_OFFSET UNITYSDK_OFFSET(0x71715A0)
#define CLASS_1_47DC99B26C6271DB_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x7170D20)
#define CLASS_1_47DC99B26C6271DB_METHOD_1_A4766B4D9580B815_OFFSET UNITYSDK_OFFSET(0x7170D90)
#define CLASS_1_47DC99B26C6271DB_METHOD_1_AA7E3074254D484A_OFFSET UNITYSDK_OFFSET(0x7170E10)
#define CLASS_1_47DC99B26C6271DB_METHOD_1_B55D7E2BB2F57B59_OFFSET UNITYSDK_OFFSET(0x7170B90)
#define CLASS_1_47DC99B26C6271DB_METHOD_1_C26A52FC112F9826_OFFSET UNITYSDK_OFFSET(0x71707E0)
#define CLASS_1_47DC99B26C6271DB_METHOD_1_E65B8EF116881E2E_OFFSET UNITYSDK_OFFSET(0x71708E0)
#define CLASS_1_47DC99B26C6271DB_METHOD_1_F0E307B84478A272_1_OFFSET UNITYSDK_OFFSET(0x7170CC0)
#define CLASS_1_47DC99B26C6271DB_METHOD_1_F0E307B84478A272_2_OFFSET UNITYSDK_OFFSET(0x71712D0)
#define CLASS_1_47DC99B26C6271DB_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x7170CF0)
#define CLASS_1_47DC99B26C6271DB__CCTOR_OFFSET UNITYSDK_OFFSET(0x7170890)
#define CLASS_1_47DC99B26C6271DB__CTOR_OFFSET UNITYSDK_OFFSET(0x71702A0)

inline static constexpr unsigned int Class_1_47DC99B26C6271DB_TypeDefinitionIndex = 56839;

class Class_1_47DC99B26C6271DB : public ::System::Object
{
public:
	static ::UnityEngine::Vector3* StaticGet_Field_1_1()
	{
		return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Class_1_47DC99B26C6271DB_TypeDefinitionIndex)->GetStaticField(0xEA80);
	}
	static ::UnityEngine::Vector3* StaticGet_Field_1_0()
	{
		return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Class_1_47DC99B26C6271DB_TypeDefinitionIndex)->GetStaticField(0xEA8C);
	}
	::System::Action* Field_1_4; // 0x10
	::Class_1_7ECB9691B142D586* Field_1_10; // 0x18
	::UnityEngine::Material* Field_1_9; // 0x20
	::System::Action_2<::UnityEngine::Texture*, ::System::Int32>* Field_1_3; // 0x28
	::MoleMole::IVideoPlayer* Field_1_8; // 0x30
	::Class_2_62DF67754B2A7986* Field_1_12; // 0x38
	::System::String* Field_1_5; // 0x40
	::UnityEngine::Transform* Field_1_7; // 0x48
	::System::Action_2<::UnityEngine::Texture*, ::System::Int32>* Field_1_2; // 0x50
	::MoleMole::Config::ConfigHollowChessboard* Field_1_6; // 0x58
	::Class_1_1B319070EAD6DC38* Field_1_11; // 0x60

	::System::Void _ctor(::MoleMole::HollowPieceRepresentType a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowPieceRepresentType))((::PBYTE)hIl2Cpp + CLASS_1_47DC99B26C6271DB__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_47DC99B26C6271DB__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47DC99B26C6271DB_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_E65B8EF116881E2E(::MoleMole::IVideoPlayer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + CLASS_1_47DC99B26C6271DB_METHOD_1_E65B8EF116881E2E_OFFSET))(this, a1);
	}

	::System::Int64 Method_1_B55D7E2BB2F57B59()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47DC99B26C6271DB_METHOD_1_B55D7E2BB2F57B59_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47DC99B26C6271DB_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47DC99B26C6271DB_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Void Method_1_A4766B4D9580B815(::System::Action_2<::UnityEngine::Texture*, ::System::Int32>* a1, ::System::Action_2<::UnityEngine::Texture*, ::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::UnityEngine::Texture*, ::System::Int32>*, ::System::Action_2<::UnityEngine::Texture*, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_47DC99B26C6271DB_METHOD_1_A4766B4D9580B815_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0F3D3A5ABDA9779E(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_47DC99B26C6271DB_METHOD_1_0F3D3A5ABDA9779E_OFFSET))(this, a1);
	}

	::System::Void Method_1_AA7E3074254D484A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47DC99B26C6271DB_METHOD_1_AA7E3074254D484A_OFFSET))(this);
	}

	::System::Void Method_1_7608435D9EAB6CD4(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_47DC99B26C6271DB_METHOD_1_7608435D9EAB6CD4_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47DC99B26C6271DB_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47DC99B26C6271DB_METHOD_1_F0E307B84478A272_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_0AE4B11CEAF7377F(::System::String* a1, ::System::Boolean a2, ::System::Action_1<::Class_1_7ECB9691B142D586*>* a3, ::System::Action_1<::Class_1_7ECB9691B142D586*>* a4, ::System::Action_1<::Class_1_7ECB9691B142D586*>* a5, ::System::Action* a6, ::System::Threading::CancellationToken a7, ::System::Action_2<::UnityEngine::Texture*, ::System::Int32>* a8, ::System::Action_2<::UnityEngine::Texture*, ::System::Int32>* a9)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Action_1<::Class_1_7ECB9691B142D586*>*, ::System::Action_1<::Class_1_7ECB9691B142D586*>*, ::System::Action_1<::Class_1_7ECB9691B142D586*>*, ::System::Action*, ::System::Threading::CancellationToken, ::System::Action_2<::UnityEngine::Texture*, ::System::Int32>*, ::System::Action_2<::UnityEngine::Texture*, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_47DC99B26C6271DB_METHOD_1_0AE4B11CEAF7377F_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Boolean Method_1_F0E307B84478A272_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47DC99B26C6271DB_METHOD_1_F0E307B84478A272_1_OFFSET))(this);
	}

	::System::Boolean Method_1_F0E307B84478A272_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47DC99B26C6271DB_METHOD_1_F0E307B84478A272_2_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_0AE4B11CEAF7377F_1(::System::String* a1, ::System::Boolean a2, ::System::Action_1<::Class_1_7ECB9691B142D586*>* a3, ::System::Action_1<::Class_1_7ECB9691B142D586*>* a4, ::System::Action_1<::Class_1_7ECB9691B142D586*>* a5, ::System::Action* a6, ::System::Threading::CancellationToken a7, ::System::Action_2<::UnityEngine::Texture*, ::System::Int32>* a8, ::System::Action_2<::UnityEngine::Texture*, ::System::Int32>* a9)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Action_1<::Class_1_7ECB9691B142D586*>*, ::System::Action_1<::Class_1_7ECB9691B142D586*>*, ::System::Action_1<::Class_1_7ECB9691B142D586*>*, ::System::Action*, ::System::Threading::CancellationToken, ::System::Action_2<::UnityEngine::Texture*, ::System::Int32>*, ::System::Action_2<::UnityEngine::Texture*, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_47DC99B26C6271DB_METHOD_1_0AE4B11CEAF7377F_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void Method_1_48F610A66D8B35EB(::MoleMole::IVideoPlayer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + CLASS_1_47DC99B26C6271DB_METHOD_1_48F610A66D8B35EB_OFFSET))(this, a1);
	}

	::System::Void Method_1_7AB2C887EB34984A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_47DC99B26C6271DB_METHOD_1_7AB2C887EB34984A_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_95780ED94B90ED36_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47DC99B26C6271DB_METHOD_1_95780ED94B90ED36_1_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_1_C26A52FC112F9826(::System::String* a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_47DC99B26C6271DB_METHOD_1_C26A52FC112F9826_OFFSET))(this, a1);
	}

	::UnityEngine::Vector4 Method_1_350FBFEA29F2BE5A()
	{
		return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47DC99B26C6271DB_METHOD_1_350FBFEA29F2BE5A_OFFSET))(this);
	}
};
