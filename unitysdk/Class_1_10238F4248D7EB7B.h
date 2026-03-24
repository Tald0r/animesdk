#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Material; }

inline static constexpr unsigned int Class_1_10238F4248D7EB7B_TypeDefinitionIndex = 61437;

template <typename T>
class Class_1_10238F4248D7EB7B : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, T>* Field_1_0; // 0x0
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, T>* Field_1_1; // 0x0
};
