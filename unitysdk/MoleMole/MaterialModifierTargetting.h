#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoRenderHandler; }
namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_MATERIALMODIFIERTARGETTING_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF1BB820)
#define MOLEMOLE_MATERIALMODIFIERTARGETTING_METHOD_1_005626ABB31986B1_OFFSET UNITYSDK_OFFSET(0xF1BB8A0)
#define MOLEMOLE_MATERIALMODIFIERTARGETTING_METHOD_1_6597F9D2D4A0542F_1_OFFSET UNITYSDK_OFFSET(0xF1BC170)
#define MOLEMOLE_MATERIALMODIFIERTARGETTING_METHOD_1_6597F9D2D4A0542F_2_OFFSET UNITYSDK_OFFSET(0xF1BC210)
#define MOLEMOLE_MATERIALMODIFIERTARGETTING_METHOD_1_6597F9D2D4A0542F_OFFSET UNITYSDK_OFFSET(0xF1BBDF0)
#define MOLEMOLE_MATERIALMODIFIERTARGETTING_METHOD_1_EEC44CB13398A651_OFFSET UNITYSDK_OFFSET(0xF1BBE90)
#define MOLEMOLE_MATERIALMODIFIERTARGETTING__CTOR_OFFSET UNITYSDK_OFFSET(0xF1BB890)

namespace MoleMole
{
	inline static constexpr unsigned int MaterialModifierTargetting_TypeDefinitionIndex = 56754;

	class MaterialModifierTargetting : public ::System::Object
	{
	public:
		::System::Action_1<::MoleMole::MaterialModifierTargetting*>* OnChanged; // 0x10
		::UnityEngine::Renderer* renderer; // 0x18
		::System::Boolean applyAllMaterials; // 0x20
		::System::Collections::Generic::List_1<::System::Int32>* customMaterialIndexList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALMODIFIERTARGETTING__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALMODIFIERTARGETTING_DISPOSE_OFFSET))(this);
		}

		::System::Int32 Method_1_005626ABB31986B1(::MoleMole::MonoRenderHandler* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::MonoRenderHandler*))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALMODIFIERTARGETTING_METHOD_1_005626ABB31986B1_OFFSET))(this, a1);
		}

		::System::Void Method_1_6597F9D2D4A0542F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALMODIFIERTARGETTING_METHOD_1_6597F9D2D4A0542F_OFFSET))(this);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::Int32>* Method_1_EEC44CB13398A651()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALMODIFIERTARGETTING_METHOD_1_EEC44CB13398A651_OFFSET))(this);
		}

		::System::Void Method_1_6597F9D2D4A0542F_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALMODIFIERTARGETTING_METHOD_1_6597F9D2D4A0542F_1_OFFSET))(this);
		}

		::System::Void Method_1_6597F9D2D4A0542F_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALMODIFIERTARGETTING_METHOD_1_6597F9D2D4A0542F_2_OFFSET))(this);
		}
	};
}
