#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/ParticleSystemShapeType.h"

class Class_3_F35B080B137ECC46;
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Renderer; }

inline static constexpr unsigned int Class_3_3BD28830688EF957_Struct_2_FD47DD1E910BC59F_TypeDefinitionIndex = 47007;

struct alignas(8) Class_3_3BD28830688EF957_Struct_2_FD47DD1E910BC59F
{
	::MoleMole::Battle::Entity* Field_2_1; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::ParticleSystemShapeType>* Field_2_5; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_3; // 0x20
	::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* Field_2_2; // 0x28
	::Class_3_F35B080B137ECC46* Field_2_0; // 0x30
	::System::Single Field_2_4; // 0x38
};
