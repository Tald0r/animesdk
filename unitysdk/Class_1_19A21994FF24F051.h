#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_19A21994FF24F051_METHOD_1_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x1852A8F0)
#define CLASS_1_19A21994FF24F051_METHOD_1_C4BFBB1BE6C0430A_OFFSET UNITYSDK_OFFSET(0x1852A670)
#define CLASS_1_19A21994FF24F051_METHOD_1_ECA33935490AF2E4_OFFSET UNITYSDK_OFFSET(0x1852A740)
#define CLASS_1_19A21994FF24F051__CTOR_OFFSET UNITYSDK_OFFSET(0x1852A660)

inline static constexpr unsigned int Class_1_19A21994FF24F051_TypeDefinitionIndex = 48667;

class Class_1_19A21994FF24F051 : public ::System::Object
{
public:
	static ::Class_1_19A21994FF24F051** StaticGet_Field_1_0()
	{
		return (::Class_1_19A21994FF24F051**)Il2CppClass::FromTypeDefinitionIndex(Class_1_19A21994FF24F051_TypeDefinitionIndex)->GetStaticField(0x42290);
	}
	// static const ::System::UInt16 Field_1_1 = 0x0; // 0x0
	// static const ::System::UInt16 Field_1_2 = 0x1; // 0x0
	// static const ::System::UInt16 Field_1_3 = 0x2; // 0x0
	// static const ::System::UInt16 Field_1_4 = 0x3; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::UInt16>* Field_1_6; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt16, ::System::Type*>* Field_1_5; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_19A21994FF24F051__CTOR_OFFSET))(this);
	}

	static ::Class_1_19A21994FF24F051* Method_1_C4BFBB1BE6C0430A()
	{
		return ((::Class_1_19A21994FF24F051*(*)())((::PBYTE)hIl2Cpp + CLASS_1_19A21994FF24F051_METHOD_1_C4BFBB1BE6C0430A_OFFSET))();
	}

	::System::Void Method_1_ECA33935490AF2E4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_19A21994FF24F051_METHOD_1_ECA33935490AF2E4_OFFSET))(this);
	}

	::System::Void Method_1_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_19A21994FF24F051_METHOD_1_97D83E4CB3B11935_OFFSET))(this);
	}
};
