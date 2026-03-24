#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoRenderHandler; }
namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_MATERIALMODIFIERTARGETTING_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB996F30)
#define MOLEMOLE_MATERIALMODIFIERTARGETTING_METHOD_1_005626ABB31986B1_OFFSET UNITYSDK_OFFSET(0xB9970F0)
#define MOLEMOLE_MATERIALMODIFIERTARGETTING_METHOD_1_232E79648899E21B_1_OFFSET UNITYSDK_OFFSET(0xB997050)
#define MOLEMOLE_MATERIALMODIFIERTARGETTING_METHOD_1_232E79648899E21B_2_OFFSET UNITYSDK_OFFSET(0xB997930)
#define MOLEMOLE_MATERIALMODIFIERTARGETTING_METHOD_1_232E79648899E21B_OFFSET UNITYSDK_OFFSET(0xB996FB0)
#define MOLEMOLE_MATERIALMODIFIERTARGETTING_METHOD_1_EEC44CB13398A651_OFFSET UNITYSDK_OFFSET(0xB997640)
#define MOLEMOLE_MATERIALMODIFIERTARGETTING__CTOR_OFFSET UNITYSDK_OFFSET(0xB996FA0)

namespace MoleMole
{
	inline static constexpr unsigned int MaterialModifierTargetting_TypeDefinitionIndex = 54278;

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

		::System::Void Method_1_232E79648899E21B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALMODIFIERTARGETTING_METHOD_1_232E79648899E21B_OFFSET))(this);
		}

		::System::Void Method_1_232E79648899E21B_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALMODIFIERTARGETTING_METHOD_1_232E79648899E21B_1_OFFSET))(this);
		}

		::System::Int32 Method_1_005626ABB31986B1(::MoleMole::MonoRenderHandler* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::MonoRenderHandler*))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALMODIFIERTARGETTING_METHOD_1_005626ABB31986B1_OFFSET))(this, a1);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::Int32>* Method_1_EEC44CB13398A651()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALMODIFIERTARGETTING_METHOD_1_EEC44CB13398A651_OFFSET))(this);
		}

		::System::Void Method_1_232E79648899E21B_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALMODIFIERTARGETTING_METHOD_1_232E79648899E21B_2_OFFSET))(this);
		}
	};
}
