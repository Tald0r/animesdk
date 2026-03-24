#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_COMIC_UTIL_EXTENSION_INIT_OFFSET UNITYSDK_OFFSET(0x1B73EFA0)
#define MOLEMOLE_COMIC_UTIL_EXTENSION_ISEQUAL_OFFSET UNITYSDK_OFFSET(0x1B73F410)
#define MOLEMOLE_COMIC_UTIL_EXTENSION_ISGREATEROREQUAL_OFFSET UNITYSDK_OFFSET(0x1B73F720)
#define MOLEMOLE_COMIC_UTIL_EXTENSION_ISGREATER_OFFSET UNITYSDK_OFFSET(0x1B73F520)
#define MOLEMOLE_COMIC_UTIL_EXTENSION_ISLESSOREQUAL_OFFSET UNITYSDK_OFFSET(0x1B73F5A0)
#define MOLEMOLE_COMIC_UTIL_EXTENSION_ISLESS_OFFSET UNITYSDK_OFFSET(0x1B73F4A0)
#define MOLEMOLE_COMIC_UTIL_EXTENSION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B73F8A0)

namespace MoleMole::Comic::Util
{
	inline static constexpr unsigned int Extension_TypeDefinitionIndex = 30079;

	class Extension : public ::System::Object
	{
	public:
		static ::System::Double* StaticGet_eps()
		{
			return (::System::Double*)Il2CppClass::FromTypeDefinitionIndex(Extension_TypeDefinitionIndex)->GetStaticField(0x7A70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_UTIL_EXTENSION__CCTOR_OFFSET))();
		}

		static ::System::Void Init(::UnityEngine::RectTransform* rectTrans, ::UnityEngine::Transform* parent)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_UTIL_EXTENSION_INIT_OFFSET))(rectTrans, parent);
		}

		static ::System::Boolean IsEqual(::System::Double a, ::System::Double b)
		{
			return ((::System::Boolean(*)(::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_UTIL_EXTENSION_ISEQUAL_OFFSET))(a, b);
		}

		static ::System::Boolean IsLess(::System::Double a, ::System::Double b)
		{
			return ((::System::Boolean(*)(::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_UTIL_EXTENSION_ISLESS_OFFSET))(a, b);
		}

		static ::System::Boolean IsGreater(::System::Double a, ::System::Double b)
		{
			return ((::System::Boolean(*)(::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_UTIL_EXTENSION_ISGREATER_OFFSET))(a, b);
		}

		static ::System::Boolean IsLessOrEqual(::System::Double a, ::System::Double b)
		{
			return ((::System::Boolean(*)(::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_UTIL_EXTENSION_ISLESSOREQUAL_OFFSET))(a, b);
		}

		static ::System::Boolean IsGreaterOrEqual(::System::Double a, ::System::Double b)
		{
			return ((::System::Boolean(*)(::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_UTIL_EXTENSION_ISGREATEROREQUAL_OFFSET))(a, b);
		}
	};
}
