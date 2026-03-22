#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::CodeDom::Compiler { class TempFileCollection; }
namespace System::Collections::Specialized { class StringCollection; }
namespace System::Security::Policy { class Evidence; }

#define SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_GET_COMPILEROPTIONS_OFFSET UNITYSDK_OFFSET(0x191C44F0)
#define SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_GET_COREASSEMBLYFILENAME_OFFSET UNITYSDK_OFFSET(0x191C4570)
#define SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_GET_EMBEDDEDRESOURCES_OFFSET UNITYSDK_OFFSET(0x191C45F0)
#define SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_GET_EVIDENCE_OFFSET UNITYSDK_OFFSET(0x191C4630)
#define SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_GET_GENERATEEXECUTABLE_OFFSET UNITYSDK_OFFSET(0x191C46B0)
#define SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_GET_GENERATEINMEMORY_OFFSET UNITYSDK_OFFSET(0x191C4730)
#define SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_GET_INCLUDEDEBUGINFORMATION_OFFSET UNITYSDK_OFFSET(0x191C47B0)
#define SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_GET_LINKEDRESOURCES_OFFSET UNITYSDK_OFFSET(0x191C4830)
#define SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_GET_MAINCLASS_OFFSET UNITYSDK_OFFSET(0x191C4870)
#define SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_GET_OUTPUTASSEMBLY_OFFSET UNITYSDK_OFFSET(0x191C48F0)
#define SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_GET_REFERENCEDASSEMBLIES_OFFSET UNITYSDK_OFFSET(0x191C4970)
#define SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_GET_TEMPFILES_OFFSET UNITYSDK_OFFSET(0x191C49B0)
#define SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_GET_TREATWARNINGSASERRORS_OFFSET UNITYSDK_OFFSET(0x191C4A30)
#define SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_GET_USERTOKEN_OFFSET UNITYSDK_OFFSET(0x191C4AB0)
#define SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_GET_WARNINGLEVEL_OFFSET UNITYSDK_OFFSET(0x191C4B30)
#define SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_GET_WIN32RESOURCE_OFFSET UNITYSDK_OFFSET(0x191C4BB0)
#define SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_SET_COMPILEROPTIONS_OFFSET UNITYSDK_OFFSET(0x191C4530)
#define SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_SET_COREASSEMBLYFILENAME_OFFSET UNITYSDK_OFFSET(0x191C45B0)
#define SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_SET_EVIDENCE_OFFSET UNITYSDK_OFFSET(0x191C4670)
#define SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_SET_GENERATEEXECUTABLE_OFFSET UNITYSDK_OFFSET(0x191C46F0)
#define SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_SET_GENERATEINMEMORY_OFFSET UNITYSDK_OFFSET(0x191C4770)
#define SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_SET_INCLUDEDEBUGINFORMATION_OFFSET UNITYSDK_OFFSET(0x191C47F0)
#define SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_SET_MAINCLASS_OFFSET UNITYSDK_OFFSET(0x191C48B0)
#define SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_SET_OUTPUTASSEMBLY_OFFSET UNITYSDK_OFFSET(0x191C4930)
#define SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_SET_TEMPFILES_OFFSET UNITYSDK_OFFSET(0x191C49F0)
#define SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_SET_TREATWARNINGSASERRORS_OFFSET UNITYSDK_OFFSET(0x191C4A70)
#define SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_SET_USERTOKEN_OFFSET UNITYSDK_OFFSET(0x191C4AF0)
#define SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_SET_WARNINGLEVEL_OFFSET UNITYSDK_OFFSET(0x191C4B70)
#define SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_SET_WIN32RESOURCE_OFFSET UNITYSDK_OFFSET(0x191C4BF0)
#define SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x191C4430)
#define SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS__CTOR_2_OFFSET UNITYSDK_OFFSET(0x191C4470)
#define SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS__CTOR_3_OFFSET UNITYSDK_OFFSET(0x191C44B0)
#define SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS__CTOR_OFFSET UNITYSDK_OFFSET(0x191C43F0)

namespace System::CodeDom::Compiler
{
	inline static constexpr unsigned int CompilerParameters_TypeDefinitionIndex = 4029;

	class CompilerParameters : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::String*>* assemblyNames)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS__CTOR_1_OFFSET))(this, assemblyNames);
		}

		::System::Void _ctor_2(::Il2CppArray<::System::String*>* assemblyNames, ::System::String* outputName)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS__CTOR_2_OFFSET))(this, assemblyNames, outputName);
		}

		::System::Void _ctor_3(::Il2CppArray<::System::String*>* assemblyNames, ::System::String* outputName, ::System::Boolean includeDebugInformation)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS__CTOR_3_OFFSET))(this, assemblyNames, outputName, includeDebugInformation);
		}

		::System::String* get_CompilerOptions()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_GET_COMPILEROPTIONS_OFFSET))(this);
		}

		::System::Void set_CompilerOptions(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_SET_COMPILEROPTIONS_OFFSET))(this, value);
		}

		::System::String* get_CoreAssemblyFileName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_GET_COREASSEMBLYFILENAME_OFFSET))(this);
		}

		::System::Void set_CoreAssemblyFileName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_SET_COREASSEMBLYFILENAME_OFFSET))(this, value);
		}

		::System::Collections::Specialized::StringCollection* get_EmbeddedResources()
		{
			return ((::System::Collections::Specialized::StringCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_GET_EMBEDDEDRESOURCES_OFFSET))(this);
		}

		::System::Security::Policy::Evidence* get_Evidence()
		{
			return ((::System::Security::Policy::Evidence*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_GET_EVIDENCE_OFFSET))(this);
		}

		::System::Void set_Evidence(::System::Security::Policy::Evidence* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Policy::Evidence*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_SET_EVIDENCE_OFFSET))(this, value);
		}

		::System::Boolean get_GenerateExecutable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_GET_GENERATEEXECUTABLE_OFFSET))(this);
		}

		::System::Void set_GenerateExecutable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_SET_GENERATEEXECUTABLE_OFFSET))(this, value);
		}

		::System::Boolean get_GenerateInMemory()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_GET_GENERATEINMEMORY_OFFSET))(this);
		}

		::System::Void set_GenerateInMemory(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_SET_GENERATEINMEMORY_OFFSET))(this, value);
		}

		::System::Boolean get_IncludeDebugInformation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_GET_INCLUDEDEBUGINFORMATION_OFFSET))(this);
		}

		::System::Void set_IncludeDebugInformation(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_SET_INCLUDEDEBUGINFORMATION_OFFSET))(this, value);
		}

		::System::Collections::Specialized::StringCollection* get_LinkedResources()
		{
			return ((::System::Collections::Specialized::StringCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_GET_LINKEDRESOURCES_OFFSET))(this);
		}

		::System::String* get_MainClass()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_GET_MAINCLASS_OFFSET))(this);
		}

		::System::Void set_MainClass(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_SET_MAINCLASS_OFFSET))(this, value);
		}

		::System::String* get_OutputAssembly()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_GET_OUTPUTASSEMBLY_OFFSET))(this);
		}

		::System::Void set_OutputAssembly(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_SET_OUTPUTASSEMBLY_OFFSET))(this, value);
		}

		::System::Collections::Specialized::StringCollection* get_ReferencedAssemblies()
		{
			return ((::System::Collections::Specialized::StringCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_GET_REFERENCEDASSEMBLIES_OFFSET))(this);
		}

		::System::CodeDom::Compiler::TempFileCollection* get_TempFiles()
		{
			return ((::System::CodeDom::Compiler::TempFileCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_GET_TEMPFILES_OFFSET))(this);
		}

		::System::Void set_TempFiles(::System::CodeDom::Compiler::TempFileCollection* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::Compiler::TempFileCollection*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_SET_TEMPFILES_OFFSET))(this, value);
		}

		::System::Boolean get_TreatWarningsAsErrors()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_GET_TREATWARNINGSASERRORS_OFFSET))(this);
		}

		::System::Void set_TreatWarningsAsErrors(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_SET_TREATWARNINGSASERRORS_OFFSET))(this, value);
		}

		::System::IntPtr get_UserToken()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_GET_USERTOKEN_OFFSET))(this);
		}

		::System::Void set_UserToken(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_SET_USERTOKEN_OFFSET))(this, value);
		}

		::System::Int32 get_WarningLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_GET_WARNINGLEVEL_OFFSET))(this);
		}

		::System::Void set_WarningLevel(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_SET_WARNINGLEVEL_OFFSET))(this, value);
		}

		::System::String* get_Win32Resource()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_GET_WIN32RESOURCE_OFFSET))(this);
		}

		::System::Void set_Win32Resource(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_SET_WIN32RESOURCE_OFFSET))(this, value);
		}
	};
}
