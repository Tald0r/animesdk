#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::Framework { template <typename T> class Graph___c__201_1; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int Graph___c__201_1_TypeDefinitionIndex = 26030;

	template <typename T>
	class Graph___c__201_1 : public ::System::Object
	{
	public:
		static ::NodeCanvas::Framework::Graph___c__201_1<T>** StaticGet___9()
		{
			return (::NodeCanvas::Framework::Graph___c__201_1<T>**)Il2CppClass::FromTypeDefinitionIndex(Graph___c__201_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<T, ::System::Boolean>** StaticGet___9__201_0()
		{
			return (::System::Func_2<T, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Graph___c__201_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
