#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_55600C1BB66DDF01___C_METHOD_1_0726639A35123DFE_OFFSET UNITYSDK_OFFSET(0x19F0A4A0)
#define CLASS_1_55600C1BB66DDF01___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19F0A450)
#define CLASS_1_55600C1BB66DDF01___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19F0A490)

inline static constexpr unsigned int Class_1_55600C1BB66DDF01___c_TypeDefinitionIndex = 7745;

class Class_1_55600C1BB66DDF01___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::System::String*>** StaticGet___9__17_0()
	{
		return (::System::Comparison_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_55600C1BB66DDF01___c_TypeDefinitionIndex)->GetStaticField(0x67C0);
	}
	static ::Class_1_55600C1BB66DDF01___c** StaticGet___9()
	{
		return (::Class_1_55600C1BB66DDF01___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_55600C1BB66DDF01___c_TypeDefinitionIndex)->GetStaticField(0x67C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_55600C1BB66DDF01___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_55600C1BB66DDF01___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_0726639A35123DFE(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_55600C1BB66DDF01___C_METHOD_1_0726639A35123DFE_OFFSET))(this, a1, a2);
	}
};
