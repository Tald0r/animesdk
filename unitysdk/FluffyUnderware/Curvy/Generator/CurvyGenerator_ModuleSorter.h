#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy::Generator { class CGModule; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_MODULESORTER_ENSUREISSORTED_OFFSET UNITYSDK_OFFSET(0x1AA4E570)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_MODULESORTER_ENSURELINKEDSLOTSBUILD_OFFSET UNITYSDK_OFFSET(0x1AA4F720)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_MODULESORTER_GET_SORTINGNEEDED_OFFSET UNITYSDK_OFFSET(0x1AA4E4F0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_MODULESORTER_HASCIRCULARREFERENCE_OFFSET UNITYSDK_OFFSET(0x1AA4E510)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_MODULESORTER_SET_SORTINGNEEDED_OFFSET UNITYSDK_OFFSET(0x1AA4E500)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_MODULESORTER_SORT_OFFSET UNITYSDK_OFFSET(0x1AA4E590)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_MODULESORTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA4FA60)

namespace FluffyUnderware::Curvy::Generator
{
	inline static constexpr unsigned int CurvyGenerator_ModuleSorter_TypeDefinitionIndex = 35788;

	class CurvyGenerator_ModuleSorter : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::FluffyUnderware::Curvy::Generator::CGModule*>* modulesWithCircularReferences; // 0x10
		::System::Collections::Generic::Dictionary_2<::FluffyUnderware::Curvy::Generator::CGModule*, ::System::Int32>* modulesAncestorCount; // 0x18
		::System::Boolean _SortingNeeded_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_MODULESORTER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_SortingNeeded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_MODULESORTER_GET_SORTINGNEEDED_OFFSET))(this);
		}

		::System::Void set_SortingNeeded(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_MODULESORTER_SET_SORTINGNEEDED_OFFSET))(this, value);
		}

		::System::Boolean HasCircularReference(::FluffyUnderware::Curvy::Generator::CGModule* module)
		{
			return ((::System::Boolean(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModule*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_MODULESORTER_HASCIRCULARREFERENCE_OFFSET))(this, module);
		}

		::System::Void EnsureIsSorted(::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGModule*>* modules)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGModule*>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_MODULESORTER_ENSUREISSORTED_OFFSET))(this, modules);
		}

		::System::Void Sort(::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGModule*>* modules)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGModule*>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_MODULESORTER_SORT_OFFSET))(this, modules);
		}

		static ::System::Void EnsureLinkedSlotsBuild(::FluffyUnderware::Curvy::Generator::CGModule* cgModule)
		{
			return ((::System::Void(*)(::FluffyUnderware::Curvy::Generator::CGModule*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_MODULESORTER_ENSURELINKEDSLOTSBUILD_OFFSET))(cgModule);
		}
	};
}
