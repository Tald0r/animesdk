#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIForbiddenAreaTeleportPointChildWindowController; }
namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6E7441878EAFC9C7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x84520F0)
#define CLASS_1_6E7441878EAFC9C7_METHOD_1_2F8C1CDF056C52FC_OFFSET UNITYSDK_OFFSET(0x8452380)
#define CLASS_1_6E7441878EAFC9C7_METHOD_1_4C6B7DF03C6A19C9_OFFSET UNITYSDK_OFFSET(0x8452180)
#define CLASS_1_6E7441878EAFC9C7_METHOD_1_DF7870AF630B4519_OFFSET UNITYSDK_OFFSET(0x84524F0)
#define CLASS_1_6E7441878EAFC9C7__CTOR_OFFSET UNITYSDK_OFFSET(0x8452000)

inline static constexpr unsigned int Class_1_6E7441878EAFC9C7_TypeDefinitionIndex = 49701;

class Class_1_6E7441878EAFC9C7 : public ::System::Object
{
public:
	static ::Class_1_6E7441878EAFC9C7** StaticGet_Field_1_0()
	{
		return (::Class_1_6E7441878EAFC9C7**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6E7441878EAFC9C7_TypeDefinitionIndex)->GetStaticField(0x30ED0);
	}
	::System::Func_1<::MoleMole::UIForbiddenAreaTeleportPointChildWindowController*>* Field_1_3; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::UIForbiddenAreaTeleportPointChildWindowController*>* Field_1_2; // 0x18
	::System::Collections::Generic::List_1<::MoleMole::UIForbiddenAreaTeleportPointChildWindowController*>* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E7441878EAFC9C7__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E7441878EAFC9C7_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_4C6B7DF03C6A19C9(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_6E7441878EAFC9C7_METHOD_1_4C6B7DF03C6A19C9_OFFSET))(this, a1);
	}

	static ::Class_1_6E7441878EAFC9C7* Method_1_2F8C1CDF056C52FC()
	{
		return ((::Class_1_6E7441878EAFC9C7*(*)())((::PBYTE)hIl2Cpp + CLASS_1_6E7441878EAFC9C7_METHOD_1_2F8C1CDF056C52FC_OFFSET))();
	}

	::System::Void Method_1_DF7870AF630B4519(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_6E7441878EAFC9C7_METHOD_1_DF7870AF630B4519_OFFSET))(this, a1);
	}
};
