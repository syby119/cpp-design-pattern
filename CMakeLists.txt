cmake_minimum_required(VERSION 3.10)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

project(design_pattern VERSION 1.0)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_CXX_STANDARD 14)

# creational patterns
add_subdirectory(./abstract_factory)
set_target_properties(abstract_factory_origin PROPERTIES FOLDER "creational pattern/abstract_factory/origin")
set_target_properties(abstract_factory_refactor PROPERTIES FOLDER "creational pattern/abstract_factory/refactor")

add_subdirectory(./builder)
set_target_properties(builder_origin PROPERTIES FOLDER "creational pattern/builder/origin")
set_target_properties(builder_refactor PROPERTIES FOLDER "creational pattern/builder/refactor")

add_subdirectory(./factory)
set_target_properties(factory_origin PROPERTIES FOLDER "creational pattern/factory/origin")
set_target_properties(factory_refactor PROPERTIES FOLDER "creational pattern/factory/refactor")

add_subdirectory(./prototype)
set_target_properties(prototype_origin PROPERTIES FOLDER "creational pattern/prototype/origin")
set_target_properties(prototype_refactor PROPERTIES FOLDER "creational pattern/prototype/refactor")

add_subdirectory(./singleton)
set_target_properties(singleton_origin PROPERTIES FOLDER "creational pattern/singleton/origin")
set_target_properties(singleton_refactor PROPERTIES FOLDER "creational pattern/singleton/refactor")

# behavioral patterns
add_subdirectory(./chain_of_responsibility)
set_target_properties(chain_of_responsibility_origin PROPERTIES FOLDER "behavioral pattern/chain_of_responsibility/origin")
set_target_properties(chain_of_responsibility_refactor PROPERTIES FOLDER "behavioral pattern/chain_of_responsibility/refactor")

add_subdirectory(./command)
set_target_properties(command_origin PROPERTIES FOLDER "behavioral pattern/command/origin")
set_target_properties(command_refactor PROPERTIES FOLDER "behavioral pattern/command/refactor")

add_subdirectory(./interpreter)
set_target_properties(interpreter PROPERTIES FOLDER "behavioral pattern/interpreter")

add_subdirectory(./iterator)
set_target_properties(iterator_origin PROPERTIES FOLDER "behavioral pattern/iterator/origin")
set_target_properties(iterator_refactor PROPERTIES FOLDER "behavioral pattern/iterator/refactor")

add_subdirectory(./mediator)
set_target_properties(mediator_origin PROPERTIES FOLDER "behavioral pattern/mediator/origin")
set_target_properties(mediator_refactor PROPERTIES FOLDER "behavioral pattern/mediator/refactor")

add_subdirectory(./memento)
set_target_properties(memento_origin PROPERTIES FOLDER "behavioral pattern/memento/origin")
set_target_properties(memento_refactor PROPERTIES FOLDER "behavioral pattern/memento/refactor")

add_subdirectory(./observer)
set_target_properties(observer_origin PROPERTIES FOLDER "behavioral pattern/observer/origin")
set_target_properties(observer_refactor PROPERTIES FOLDER "behavioral pattern/observer/refactor")

add_subdirectory(./state)
set_target_properties(state_origin PROPERTIES FOLDER "behavioral pattern/state/origin")
set_target_properties(state_refactor PROPERTIES FOLDER "behavioral pattern/state/refactor")

add_subdirectory(./strategy)
set_target_properties(strategy_origin PROPERTIES FOLDER "behavioral pattern/strategy/origin")
set_target_properties(strategy_refactor PROPERTIES FOLDER "behavioral pattern/strategy/refactor")

add_subdirectory(./template)
set_target_properties(template_origin PROPERTIES FOLDER "behavioral pattern/template/origin")
set_target_properties(template_refactor PROPERTIES FOLDER "behavioral pattern/template/refactor")

add_subdirectory(./visitor)
set_target_properties(visitor_origin PROPERTIES FOLDER "behavioral pattern/visitor/origin")
set_target_properties(visitor_refactor PROPERTIES FOLDER "behavioral pattern/visitor/refactor")

# structural patterns
add_subdirectory(./adaptor)
set_target_properties(adaptor_origin PROPERTIES FOLDER "structural pattern/adaptor/origin")
set_target_properties(adaptor_refactor PROPERTIES FOLDER "structural pattern/adaptor/refactor")

add_subdirectory(./bridge)
set_target_properties(bridge_origin PROPERTIES FOLDER "structural pattern/bridge/origin")
set_target_properties(bridge_refactor PROPERTIES FOLDER "structural pattern/bridge/refactor")

add_subdirectory(./composite)
set_target_properties(composite_origin PROPERTIES FOLDER "structural pattern/composite/origin")
set_target_properties(composite_refactor PROPERTIES FOLDER "structural pattern/composite/refactor")

add_subdirectory(./decorator)
set_target_properties(decorator_origin PROPERTIES FOLDER "structural pattern/decorator/origin")
set_target_properties(decorator_refactor PROPERTIES FOLDER "structural pattern/decorator/refactor")

add_subdirectory(./facade)
set_target_properties(facade_origin PROPERTIES FOLDER "structural pattern/facade/origin")
set_target_properties(facade_refactor PROPERTIES FOLDER "structural pattern/facade/refactor")

add_subdirectory(./flyweight)
set_target_properties(flyweight_origin PROPERTIES FOLDER "structural pattern/flyweight/origin")
set_target_properties(flyweight_refactor PROPERTIES FOLDER "structural pattern/flyweight/refactor")

add_subdirectory(./proxy)
set_target_properties(proxy_origin PROPERTIES FOLDER "structural pattern/proxy/origin")
set_target_properties(proxy_refactor PROPERTIES FOLDER "structural pattern/proxy/refactor")