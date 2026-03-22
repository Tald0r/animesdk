#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_9AE843FF905C0BDB;
class Class_3_F35B080B137ECC46;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_2712D76941E4508C___C_METHOD_1_1581B1E207214598_OFFSET UNITYSDK_OFFSET(0x6914FC0)
#define CLASS_3_2712D76941E4508C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x6914F70)
#define CLASS_3_2712D76941E4508C___C__CTOR_OFFSET UNITYSDK_OFFSET(0x6914FB0)

inline static constexpr unsigned int Class_3_2712D76941E4508C___c_TypeDefinitionIndex = 64471;

class Class_3_2712D76941E4508C___c : public ::System::Object
{
public:
	static ::System::Action_2<::Class_3_F35B080B137ECC46*, ::Class_3_9AE843FF905C0BDB*>** StaticGet___9__12_0()
	{
		return (::System::Action_2<::Class_3_F35B080B137ECC46*, ::Class_3_9AE843FF905C0BDB*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_2712D76941E4508C___c_TypeDefinitionIndex)->GetStaticField(0x3B8F0);
	}
	static ::Class_3_2712D76941E4508C___c** StaticGet___9()
	{
		return (::Class_3_2712D76941E4508C___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_2712D76941E4508C___c_TypeDefinitionIndex)->GetStaticField(0x3B8F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_2712D76941E4508C___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2712D76941E4508C___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1581B1E207214598(::Class_3_F35B080B137ECC46* a1, ::Class_3_9AE843FF905C0BDB* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F35B080B137ECC46*, ::Class_3_9AE843FF905C0BDB*))((::PBYTE)hIl2Cpp + CLASS_3_2712D76941E4508C___C_METHOD_1_1581B1E207214598_OFFSET))(this, a1, a2);
	}
};
