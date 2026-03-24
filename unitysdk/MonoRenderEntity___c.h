#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { template <typename T> class Comparison_1; }

#define MONORENDERENTITY___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19ECDEA0)
#define MONORENDERENTITY___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19ECDEE0)
#define MONORENDERENTITY___C__SHUFFLEOVERLAYINDEX_B__150_0_OFFSET UNITYSDK_OFFSET(0x19ECDEF0)

inline static constexpr unsigned int MonoRenderEntity___c_TypeDefinitionIndex = 29051;

class MonoRenderEntity___c : public ::System::Object
{
public:
	static ::MonoRenderEntity___c** StaticGet___9()
	{
		return (::MonoRenderEntity___c**)Il2CppClass::FromTypeDefinitionIndex(MonoRenderEntity___c_TypeDefinitionIndex)->GetStaticField(0x23C30);
	}
	static ::System::Comparison_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>** StaticGet___9__150_0()
	{
		return (::System::Comparison_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>**)Il2CppClass::FromTypeDefinitionIndex(MonoRenderEntity___c_TypeDefinitionIndex)->GetStaticField(0x23C38);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONORENDERENTITY___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONORENDERENTITY___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _ShuffleOverlayIndex_b__150_0(::System::ValueTuple_2<::System::Int32, ::System::Int32> x, ::System::ValueTuple_2<::System::Int32, ::System::Int32> y)
	{
		return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::ValueTuple_2<::System::Int32, ::System::Int32>))((::PBYTE)hIl2Cpp + MONORENDERENTITY___C__SHUFFLEOVERLAYINDEX_B__150_0_OFFSET))(this, x, y);
	}
};
