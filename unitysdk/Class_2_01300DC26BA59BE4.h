#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Singleton_1.h"

class Class_1_C071969CF1309097;
namespace Foundation { template <typename T> class ObjectPoolOfReusable_1; }
namespace MoleMole { class UIHollowChessPieceParticle; }
namespace MoleMole::Config { class HollowChessboardParticleConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }

#define CLASS_2_01300DC26BA59BE4_METHOD_2_13D66C43117B2D48_OFFSET UNITYSDK_OFFSET(0x61F9DC0)
#define CLASS_2_01300DC26BA59BE4_METHOD_2_96980C17A8BB1F06_OFFSET UNITYSDK_OFFSET(0x61F9AD0)
#define CLASS_2_01300DC26BA59BE4_METHOD_2_B0A304F78162D138_OFFSET UNITYSDK_OFFSET(0x61F9C90)
#define CLASS_2_01300DC26BA59BE4__CTOR_OFFSET UNITYSDK_OFFSET(0x61F9A20)

inline static constexpr unsigned int Class_2_01300DC26BA59BE4_TypeDefinitionIndex = 63896;

class Class_2_01300DC26BA59BE4 : public ::Foundation::Singleton_1<::Class_2_01300DC26BA59BE4*>
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::ObjectPoolOfReusable_1<::MoleMole::UIHollowChessPieceParticle*>*>* Field_2_1; // 0x10
	::Class_1_C071969CF1309097* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01300DC26BA59BE4__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_96980C17A8BB1F06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01300DC26BA59BE4_METHOD_2_96980C17A8BB1F06_OFFSET))(this);
	}

	::MoleMole::UIHollowChessPieceParticle* Method_2_B0A304F78162D138(::System::String* a1, ::MoleMole::Config::HollowChessboardParticleConfig* a2, ::UnityEngine::Transform* a3)
	{
		return ((::MoleMole::UIHollowChessPieceParticle*(*)(::PVOID, ::System::String*, ::MoleMole::Config::HollowChessboardParticleConfig*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_01300DC26BA59BE4_METHOD_2_B0A304F78162D138_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_13D66C43117B2D48(::MoleMole::UIHollowChessPieceParticle* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIHollowChessPieceParticle*))((::PBYTE)hIl2Cpp + CLASS_2_01300DC26BA59BE4_METHOD_2_13D66C43117B2D48_OFFSET))(this, a1);
	}
};
